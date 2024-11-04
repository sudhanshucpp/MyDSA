#include <iostream>
#include <vector>

using namespace std;

bool isSafeSequence(vector<vector<int>>& max, vector<vector<int>>& allocation, vector<int>& available, int n, int m) {
    vector<int> work = available;
    vector<bool> finish(n, false);
    vector<int> safeSequence;
    
    int count = 0;
    while (count < n) {
        bool found = false;
        
        for (int i = 0; i < n; i++) {
            if (!finish[i]) {
                bool canAllocate = true;
                
                for (int j = 0; j < m; j++) {
                    if (max[i][j] - allocation[i][j] > work[j]) {
                        canAllocate = false;
                        break;
                    }
                }
                
                if (canAllocate) {
                    for (int j = 0; j < m; j++) {
                        work[j] += allocation[i][j];
                    }
                    
                    safeSequence.push_back(i);
                    finish[i] = true;
                    found = true;
                    count++;
                }
            }
        }
        
        if (!found) {
            cout << "System is in deadlock. No safe sequence found." << endl;
            return false;
        }
    }
    
    cout << "System is in a safe state. Safe sequence is: ";
    for (int i : safeSequence) {
        cout << "P" << i << " ";
    }
    cout << endl;
    return true;
}

int main() {
    int n, m;
    cout << "Enter the number of processes: ";
    cin >> n;
    cout << "Enter the number of resources: ";
    cin >> m;

    vector<vector<int>> max(n, vector<int>(m));
    vector<vector<int>> allocation(n, vector<int>(m));
    vector<int> available(m);

    cout << "Enter the Max Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> max[i][j];
        }
    }

    cout << "Enter the Allocation Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> allocation[i][j];
        }
    }

    cout << "Enter the Available Resources:\n";
    for (int i = 0; i < m; i++) {
        cin >> available[i];
    }

    isSafeSequence(max, allocation, available, n, m);

    return 0;
}