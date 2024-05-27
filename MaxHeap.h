// CS 3100 Project 6 by Jinho Nam
// There must be "MaxHeap.cpp" file in the same directory

#include <iostream>
#include <vector>

using namespace std;

#define HEAP_MIN_SIZE 20

class MaxHeap {
    private:
        // MaxHeap Fields
        int* heap;
        int count; // # of elements in the array currently
        int size; // Assigned size of the array
        
        // Additional methods as helper
        bool isFull();
        bool isHalfFull();
        void resize();
        int getLeftChild(int);
        int getRightChild(int);
        void print(ostream&) const;

    public:    
        // Default Constructor
        MaxHeap();

        // Cpoy Constructor
        MaxHeap(const MaxHeap& other);

        // Copy Assignment Operator
        MaxHeap& operator=(const MaxHeap&);

        // Special Constructor
        // Create a new heap by coping the given array
        // then use the heapify algorithm
        // to convert the values to a maxheap
        MaxHeap(int* values, int count);

        // Destructor
        ~MaxHeap();

        // Insert a new value into the heap.
        // (Duplicate keys are allowed)
        void offer(int);

        // Remove and return the max value in the heap
        // If the heap is empty, throw an exception
        int poll();

        // Return true if the heap is empty
        // Otherwise, return false
        bool isEmpty() const;

        // Return the max value heap without removing it
        // If the heap is empty, throw an exception
        int peek() const;

        // Creates and returns an array of integers containing
        // the heap elements sorted in largest to smallest order
        std::vector<int> sorted() const;

        // Do heapify
        void heapify(int);

        // BuildHeap
        void buildHeap();

        // Return the current number of elements in the array
        int getCount();

        // Return the current size of the array
        int getSize();

        // Print out the Maxheap
        friend ostream& operator<<(ostream&os, const MaxHeap& heap);
};