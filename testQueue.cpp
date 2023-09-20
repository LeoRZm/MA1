// Include necessary headers for testing
#include "testQueue.h"
#include "queue.h"
#include <cassert>

// Define your test functions
void testSize()
{
    // Test Case 1: Test size() on an empty queue
    // Create an empty queue
    queue myQueue;
    // Check if size() returns 0 for an empty queue
    assert(myQueue.size() == 0);

    // Test Case 2: Test size() after enqueueing elements
    // Create a queue and enqueue elements
    queue anotherQueue;
    anotherQueue.enqueue(10);
    anotherQueue.enqueue(20);
    // Check if size() returns the correct size
    assert(anotherQueue.size() == 2);
}

void testIsEmpty()
{
    // Test Case 1: Test isEmpty() on an empty queue
    // Create an empty queue
    queue myQueue;
    // Check if isEmpty() returns true for an empty queue
    assert(myQueue.isEmpty() == true);

    // Test Case 2: Test isEmpty() on a non-empty queue
    // Create a queue and enqueue an element
    queue anotherQueue;
    anotherQueue.enqueue(10);
    // Check if isEmpty() returns false for a non-empty queue
    assert(anotherQueue.isEmpty() == false);
}

void testIsFull()
{
    // Test Case 1: Test isFull() on a queue with less than the capacity
    // Create a queue with a small capacity
    queue myQueue(2);
    // Check if isFull() returns false when the queue is not full
    assert(myQueue.isFull() == false);

    // Test Case 2: Test isFull() on a full queue
    // Create a queue and enqueue elements up to its capacity
    queue anotherQueue(2);
    anotherQueue.enqueue(10);
    anotherQueue.enqueue(20);
    // Check if isFull() returns true when the queue is full
    assert(anotherQueue.isFull() == true);
}

void testDequeue()
{
    // Test Case 1: Test dequeue() on an empty queue
    // Create an empty queue
    queue myQueue;
    // Attempt to dequeue an element and check for underflow
    myQueue.dequeue(); // This should not crash and print an error message

    // Test Case 2: Test dequeue() on a non-empty queue
    // Create a queue, enqueue an element, and then dequeue it
    queue anotherQueue;
    anotherQueue.enqueue(10);
    anotherQueue.dequeue();
    // Check if the queue is empty after dequeueing
    assert(anotherQueue.isEmpty() == true);
}

void testEnqueue()
{
    // Test Case 1: Test enqueue() on a queue with room for more elements
    // Create a queue with a capacity of 2
    queue myQueue(2);
    // Enqueue two elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    // Check if the queue is not full after enqueuing
    assert(myQueue.isFull() == false);

    // Test Case 2: Test enqueue() on a full queue
    // Create a queue with a capacity of 1 and enqueue an element
    queue anotherQueue(1);
    anotherQueue.enqueue(10);
    // Attempt to enqueue another element and check for overflow
    anotherQueue.enqueue(20); // This should not crash and print an error message
}

void testPeek()
{
    // Test Case 1: Test peek() on an empty queue
    // Create an empty queue
    queue myQueue;
    // Attempt to peek at the front element and check for underflow
    assert(myQueue.peek() == numeric_limits<int>::min());

    // Test Case 2: Test peek() on a non-empty queue
    // Create a queue, enqueue an element, and then peek at it
    queue anotherQueue;
    anotherQueue.enqueue(10);
    // Check if peek() returns the correct element
    assert(anotherQueue.peek() == 10);
}
