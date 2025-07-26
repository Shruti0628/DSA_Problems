//Queue is a container that implements the FIFO (First In First Out) principle. It allows you to add elements to the back and remove elements from the front.
#include <bits/stdc++.h>
using namespace std;
void explainQueue() {
    queue<int> q; // Creates an empty queue

    q.push(10); // Adds 10 to the back of the queue
    q.push(20); // Adds 20 to the back of the queue
    q.push(30); // Adds 30 to the back of the queue

    cout << "Front element: " << q.front() << endl; // Prints the front element (10)
    cout << "Back element: " << q.back() << endl;   // Prints the back element (30)

    q.pop(); // Removes the front element (10)

    cout << "Front element after pop: " << q.front() << endl; // Now prints 20

    // Printing all elements in the queue
    cout << "Elements in queue: ";
    while (!q.empty()) {
        cout << q.front() << " "; // Print front element
        q.pop(); // Remove front element
    }
}

int main() {
    explainQueue();
    return 0;
}