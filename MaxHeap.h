#pragma once
// FILE: MaxHeap.h
// CLASS PROVIDED: MaxHeap

#include <iostream>
#include <exception>
#include <vector>
#include <string>

using namespace std;

#define HEAP_MIN_SIZE 20

class MaxHeap{

public:

// -------------------------
// Constructors
// -------------------------

/// @brief Creates an empty MaxHeap of size HEAP_MIN_SIZE.
MaxHeap();

/// @brief Creates a new heap by copying the array values 
/// and then using the heapify algorithm to convert the 
/// values to a maxheap.
/// @param values 
MaxHeap(int * values);

/// @brief Destroys all items in the MaxHeap 
/// and releases the memory associated 
~MaxHeap();

// -------------------------
// Operator Overrides
// -------------------------

/// @brief The current MaxHeap is released and replaced by a (deep) copy of 
/// MaxHeap (h). A reference to the copied MaxHeap is returned.
/// @param h the MaxHeap to be copied
/// @return *this with elements from h copied into
MaxHeap& operator=(const MaxHeap& h);

/// @brief 
/// @param os 
/// @param t 
/// @return 
friend ostream& operator<<(ostream& os, MaxHeap& h);

// -------------------------
// Functions
// -------------------------

/// @brief Destroys all items in the AVLTree and release the memory associated 
/// with the AVLTree 
void clear();

/// @brief Copys all items in the AVLTree into a new AVLTree
/// @param oldNode Tree node to copy from
/// @param newNode Tree node to copy to
void copy();

/// @brief Insert a new value into the heap
/// @param value value to be inserted into the heap
void offer(int value);

/// @brief Removes and returns the maximum value in the heap
/// @param value vals
/// @return maximum value in the heap
int poll(int value);

/// @brief  Returns whether or not the heap is empty
/// @return true if the heap is empty, and false otherwise
bool isEmpty() const;

/// @brief Returns the maximum value in the heap without removing it
/// @return maximum value
int peak() const;

/// @brief Creates an array of integers containing the heap elements sorted in largest to smallest order. 
/// @return pointer to the sorted array of integers
int * sorted() const;

};