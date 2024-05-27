// CS 3100 Project 6 by Jinho Nam
// There must be "MaxHeap.h" file in the same directory

#include "MaxHeap.h"
#include <iostream>
#include <vector>

using namespace std;

// Default Constructor
MaxHeap::MaxHeap() {
    heap = new int[HEAP_MIN_SIZE];
    size = HEAP_MIN_SIZE; // Initialized size of the array
    count = 0; // # of elements in the array currently
}

// Copy Constructor
MaxHeap::MaxHeap(const MaxHeap& other) {
    // Reset everything of *this
    (this -> heap) = nullptr;
    (this -> size) = 0;
    (this -> count) = 0;

    heap = new int[other.size];
    for (int i = 0; i < other.size; i++) {
        heap[i] = other.heap[i];
    }
    size = other.size;
    count = other.count;
}

// Copy Assignment Operator
MaxHeap& MaxHeap::operator=(const MaxHeap& copied) {
    // Reset everything of *this
    delete[] heap;
    
    heap = new int[copied.size];
    for (int i = 0; i < copied.size; i++) {
        heap[i] = copied.heap[i];
    }
    size = copied.size;
    count = copied.count;

    return *this;
}

// -------------------------------------------------------------
// Special Constructor
// MaxHeap::MaxHeap: Create a new heap by coping the given array
//                   then use the heapify algorithm to convert
//                   the values to a MaxHeap.
// Returns: -
// Parameters:
//       values (int *) - an array
//       numOfElements (int) - the number of elements in the array
// -------------------------------------------------------------
MaxHeap::MaxHeap(int* values, int numOfElements) {
    // Reset everything of *this
    (this -> heap) = nullptr;
    (this -> size) = 0;
    (this -> count) = 0;

    // Copy an array
    heap = new int[HEAP_MIN_SIZE];
    for (int i = 0; i < numOfElements; i++) {
        heap[i] = values[i];
    }
    (this -> count) = numOfElements;

    // Heapify
    buildHeap();
}

// Destructor
MaxHeap::~MaxHeap() {
    delete[] heap;
}

// -------------------------------------------------------------
// MaxHeap::offer: Insert a new value into the heap
// 
// Returns: -
// Parameters:
//       value (int) - an array
// -------------------------------------------------------------
void MaxHeap::offer(int value) {
    heap[count] = value;
    count += 1;
    if (this -> isFull()) {
        resize();
    }
    buildHeap();
}

// -------------------------------------------------------------
// MaxHeap::poll: Remove and return the max value in the heap
// 
// Returns: temp (int) - the max value in the heap
// Parameters: -
// -------------------------------------------------------------
int MaxHeap::poll() {
    int temp = 0;
    if (this -> isEmpty()) {
        cout << "*** The heap is empty, no more to poll ***" << endl;
        throw exception();
    }
    else {
        // Remove first and then return
        temp = heap[0];
        heap[0] = heap[count - 1];
        heap[count - 1] = 0;
        count -= 1;
        if (this -> isHalfFull()) {
            resize();
        }
        heapify(0);
        return temp;
    }
}

// -------------------------------------------------------------
// MaxHeap::isEmpty: Return true if the heap is empty
// Returns: true (bool) - if the heap is empty
//          false (bool) - if the heap is NOT empty
// Parameters: -
// -------------------------------------------------------------
bool MaxHeap::isEmpty() const {
    if (count == 0) {
        return true;
    }
    else {
        return false;
    }
}

// -------------------------------------------------------------
// MaxHeap::peek: Return the max value heap without removing it
// Returns: heap[0] (int) - The max value in the heap
// 
// Parameters: -
// -------------------------------------------------------------
int MaxHeap::peek() const {
    if (heap[0]) {
        return heap[0];
    }
    else {
        cout << "*** There's nothing to peek. ***" << endl;
        throw exception();
    }
}

// -------------------------------------------------------------
// MaxHeap::peek: Return the max value heap without removing it
// Returns: tempVector (vector<int>) - The sorted vector
// 
// Parameters: -
// -------------------------------------------------------------
std::vector<int> MaxHeap::sorted() const {
    // If the heap is empty
    if (count == 0) {
        return std::vector<int>();
    }

    // Create an array of integers containing
    // the heap elements sorted in largest to smallest
    MaxHeap tempArray;
    std::vector<int> tempVector;
    int temp = 0;

    // Copy an element to a temp array
    tempArray.size = size;
    tempArray.count = count;
    for (int i = 0; i < count; i++) {
        tempArray.heap[i] = heap[i];
    }

    // Remove the first element, and bring the last one to the first
    for (int i = count - 1; i >= 0; i--) {
        tempVector.push_back(tempArray.heap[0]);
        temp = tempArray.heap[i];
        tempArray.heap[i] = 0;
        tempArray.heap[0] = temp;
        tempArray.count -= 1;
        // Do heapify
        tempArray.heapify(0);
    }
    
    // delete[] tempArray.heap;
    return tempVector;
}

// -------------------------------------------------------------
// MaxHeap::heapify: Heapify one element of the array
// Returns: -
// 
// Parameters:
//       index (int)
// -------------------------------------------------------------
void MaxHeap::heapify(int index) {
    // Local variables 
    int largest = index; // heap[i]
    int leftChild = getLeftChild(index); // heap[2 * i + 1]
    int rightChild = getRightChild(index); // heap[2 * i + 2]
    int temp = 0; // a temporal variable for swap

    // Check Left-Child
    if ( (leftChild < count) && (heap[leftChild] > heap[largest]) ) {
        largest = leftChild;
    }

    // Check Right-Child
    if ( (rightChild < count) && (heap[rightChild] > heap[largest]) ) {
        largest = rightChild;
    }

    // Swap if the largest is not equal to heap[i] 
    if (largest != index) {
        temp = heap[index];
        // cout << "Swap " << heap[index] << " and " << heap[largest] << endl;
        heap[index] = heap[largest];
        heap[largest] = temp;
        // Do heapify
        heapify(largest);
    }
}

// -------------------------------------------------------------
// MaxHeap::buildHeap: Apply heapify() to all non-leaf nodes bottom-up manner
// Returns: -
// Parameters: -
// -------------------------------------------------------------
void MaxHeap::buildHeap() {
    int startingIndex = (count / 2) - 1;

    for (int i = startingIndex; i >= 0; i--) {
        // cout << "Build heap " << i << ": " << heap[i] << endl;
        heapify(i);
    }
}

// Return the number of elements in the array
int MaxHeap::getCount() {
    return count;
}

// Return the initialized size of the array
int MaxHeap::getSize() {
    return size;
}

// Overriding operator << to print the MaxHeap
ostream& operator<<(ostream&os, const MaxHeap& heap) {
    heap.print(os);
    return os;
}

// -------------------------------------------------------------
// MaxHeap::isFull: Check if the heap is full, if so
//                  double the size value and use this value at resize()
// Returns: true (bool) - The heap is full
//          false (bool) - The heap is NOT full
// Parameters: -
// -------------------------------------------------------------
bool MaxHeap::isFull() {
    if (count >= size) {
        size *= 2;
        return true;
    }
    else {
        return false;
    }
}

// -------------------------------------------------------------
// MaxHeap::isHalfFull: Check if the heap is half full, if so
//                      half the size value and use this value at resize()
// Returns: true (bool) - The heap is half full
//          false (bool) - The heap is NOT half full
// Parameters: -
// -------------------------------------------------------------
bool MaxHeap::isHalfFull() {
    if ( (size > HEAP_MIN_SIZE) && (count < (0.5*size)) ) {
        size /= 2;
        return true;
    }
    else {
        return false;
    }
}

// -------------------------------------------------------------
// MaxHeap::resize: Resize the size of the heap
//                  with the value of this.size
// Returns: -
// Parameters: -
// -------------------------------------------------------------
void MaxHeap::resize() {
    int *tempArray = new int[size];
    
    for (int i = 0; i < size; i++) {
        tempArray[i] = heap[i];
    }

    delete[] heap;
    heap = tempArray;
}

// Return left-child index of the index
int MaxHeap::getLeftChild(int index) {
    return 2 * index + 1;
}

// Return right-child index of the index
int MaxHeap::getRightChild(int index) {
    return 2 * index + 2;
}

// Print the MaxHeap
void MaxHeap::print(ostream& os) const {
    os << "[";
    for (int i = 0; i < (count - 1); i++) {
        os << heap[i] << ", ";
    }
    os << heap[count - 1] << "]";
}
