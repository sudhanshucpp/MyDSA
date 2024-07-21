#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q; // FIFO => first in first out
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl; // Correct method to access the front element of the queue

    q.pop(); // Removes the element at the front of the queue
    cout << q.front() << endl;

    return 0;
}
