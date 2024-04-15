## Table of Contents:
* [Learning Objectives](#learning-objectives)
* [Overview](#overview)
* [The MaxHeap Class](#the-maxheap-class)
* [Grading](#turn-in-and-grading)

---

## _Learning Objectives_

- Implement a data structure to meet given specifications.
- Design, implement, and use a priority queue implemented as an array-based heap.

## _Overview_

Your task for this assignment is to build a priority queue implemented as a MAX-HEAP of integers that uses an expandable array for data storage.

## _The MaxHeap Class_

Your Heap class should contain an **array** (not a vector) of integers. The initial size of the array should be #defined in your MaxHeap.h file as #define HEAP_MIN_SIZE 20. If the heap becomes full, the array size should be doubled. If the heap becomes less than half full (but larger than HEAP_MIN_SIZE) the size of the array should be halved.

As usual, your heap should be defined in two files: MaxHeap.h and MaxHeap.cpp. Your class should support the following operations:

- `void MaxHeap::offer(int value)` – Insert a new value into the heap. Duplicate keys are allowed.

- `int MaxHeap::poll()` – Removes and returns the maximum value in the heap. If the heap is empty, this method should throw an exception.

- `bool MaxHeap::isEmpty() const` – Returns `true` if the heap is empty, and `false` otherwise.

- `int MaxHeap::peek() const` ‐ Returns the maximum value in the heap without removing it. If the heap is empty, this method should throw an exception.

- `vector<int> MaxHeap::sorted() const` ‐ Creates and returns an array of integers containing the heap elements sorted in largest to smallest order. If the heap is empty, this method should return a null pointer. _A good approach for implementing this method would be to copy the heap contents into a new array, and then perform heapsort on the copy._

- Your heap class should include the following two constructors:
    - `MaxHeap::MaxHeap()` ‐ Creates an empty MaxHeap of size HEAP_MIN_SIZE.
    - `MaxHeap::MaxHeap(int * values, int count)` ‐ Creates a new heap by copying the array `values` and then using the heapify algorithm to convert the values to a maxheap. This method must use heapify and must run in _O(n)_ time.
- As usual, your class should have an appropriate copy constructor and should overload `operator=` to produce an independent copy of your heap.

- Your HashTable class should also overload `operator<<` such that `cout << myHeap;` prints the heap in the order in which it is stored in the array (NOT in sorted order).

In addition to the methods listed above, you may create any additional private methods that help in your class implementation. Some possibilities include int `getParent(int);` `int getLeftChild(int);` and `int getRightChild(int);`

You will also need to create a test harness that creates multiple heaps and thoroghly tests all of the above methods and requirements. Additionally, in order to work with my test harness, your method declarations **must match the method signatures given above exactly.**

## _Turn in and Grading_

See [README.md](https://github.com/WSU-CS-3100/Project5/blob/main/README.md)
