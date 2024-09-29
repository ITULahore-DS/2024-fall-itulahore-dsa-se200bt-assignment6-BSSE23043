#include <iostream>
#include "functions.h"

using namespace std;


// Assuming the Queue class is defined and implemented above this point
int main() {
    Queue q;

    // Test Case 1: Empty Queue Check
    cout << "Test Case 1: Empty Queue Check" << endl;
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    // Test Case 2: Enqueue into Empty Queue
    cout << "\nTest Case 2: Enqueue into Empty Queue" << endl;
    q.enqueue(10);
    cout << "Queue after enqueueing 10: ";
    q.printQueue();
    cout << "Queue size: " << q.size() << endl;

    // Test Case 3: Enqueue Multiple Elements
    cout << "\nTest Case 3: Enqueue Multiple Elements" << endl;
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << "Queue after enqueueing 20, 30, 40: ";
    q.printQueue();
    cout << "Queue size: " << q.size() << endl;

    // Test Case 4: Dequeue Single Element
    cout << "\nTest Case 4: Dequeue Single Element" << endl;
    q.dequeue();
    cout << "Queue after dequeueing one element: ";
    q.printQueue();
    cout << "Queue size: " << q.size() << endl;

    // Test Case 5: Dequeue Multiple Elements
    cout << "\nTest Case 5: Dequeue Multiple Elements" << endl;
    q.dequeue();
    q.dequeue();
    cout << "Queue after dequeueing two more elements: ";
    q.printQueue();
    cout << "Queue size: " << q.size() << endl;

    // Test Case 6: Dequeue from Empty Queue
    cout << "\nTest Case 6: Dequeue from Empty Queue" << endl;
    q.dequeue(); // Should dequeue the last remaining element
    cout << "Queue after dequeueing last element: ";
    q.printQueue();
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    
    // Trying to dequeue from an empty queue, should handle gracefully
    q.dequeue();

    // Test Case 7: Check Queue Size
    cout << "\nTest Case 7: Check Queue Size" << endl;
    q.enqueue(50);
    q.enqueue(60);
    cout << "Queue after enqueueing 50, 60: ";
    q.printQueue();
    cout << "Queue size: " << q.size() << endl;
    
    q.dequeue();
    cout << "Queue after dequeueing one element: ";
    q.printQueue();
    cout << "Queue size: " << q.size() << endl;

    // Test Case 8: Print Queue
    cout << "\nTest Case 8: Print Queue" << endl;
    cout << "Final state of the queue: ";
    q.printQueue();

    // Test Case 9: Edge Case - Single Element Queue
    cout << "\nTest Case 9: Edge Case - Single Element Queue" << endl;
    Queue q2;
    q2.enqueue(70);
    cout << "Queue after enqueueing one element (70): ";
    q2.printQueue();
    q2.dequeue();
    cout << "Queue after dequeueing the single element: ";
    q2.printQueue();
    cout << "Is queue empty? " << (q2.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}

