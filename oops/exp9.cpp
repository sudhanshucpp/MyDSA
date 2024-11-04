#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

struct Process {
    int pid;
    int burstTime;
    int arrivalTime;
    int remainingTime;
    int priority;
    bool completed = false;
};

void srtf(vector<Process>& processes) {
    int currentTime = 0;
    int completed = 0;
    int n = processes.size();

    cout << "\nSRTF Scheduling Order:\n";

    while (completed != n) {
        int minTime = INT_MAX;
        int shortest = -1;

        for (int i = 0; i < n; i++) {
            if (processes[i].arrivalTime <= currentTime && !processes[i].completed && processes[i].remainingTime < minTime) {
                minTime = processes[i].remainingTime;
                shortest = i;
            }
        }

        if (shortest == -1) {
            currentTime++;
            continue;
        }

        cout << "Time " << currentTime << ": Process " << processes[shortest].pid << endl;
        processes[shortest].remainingTime--;
        currentTime++;

        if (processes[shortest].remainingTime == 0) {
            processes[shortest].completed = true;
            completed++;
        }
    }
}

void preemptivePriority(vector<Process>& processes) {
    int currentTime = 0;
    int completed = 0;
    int n = processes.size();

    cout << "\nPreemptive Priority Scheduling Order:\n";

    while (completed != n) {
        int highestPriority = INT_MAX;
        int priorityProcess = -1;

        for (int i = 0; i < n; i++) {
            if (processes[i].arrivalTime <= currentTime && !processes[i].completed && processes[i].priority < highestPriority) {
                highestPriority = processes[i].priority;
                priorityProcess = i;
            }
        }

        if (priorityProcess == -1) {
            currentTime++;
            continue;
        }

        cout << "Time " << currentTime << ": Process " << processes[priorityProcess].pid << endl;
        processes[priorityProcess].remainingTime--;
        currentTime++;

        if (processes[priorityProcess].remainingTime == 0) {
            processes[priorityProcess].completed = true;
            completed++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Process " << i + 1 << endl;
        processes[i].pid = i + 1;
        cout << "Arrival Time: ";
        cin >> processes[i].arrivalTime;
        cout << "Burst Time: ";
        cin >> processes[i].burstTime;
        processes[i].remainingTime = processes[i].burstTime;  // Initialize remaining time
        cout << "Priority (for priority scheduling): ";
        cin >> processes[i].priority;
    }

    int choice;
    do {
        cout << "\nChoose Scheduling Algorithm:\n";
        cout << "1. Shortest Remaining Time First (SRTF)\n";
        cout << "2. Preemptive Priority Scheduling\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        for (int i = 0; i < n; i++) {
            processes[i].remainingTime = processes[i].burstTime;
            processes[i].completed = false;
        }

        switch (choice) {
            case 1:
                srtf(processes);
                break;
            case 2:
                preemptivePriority(processes);
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
