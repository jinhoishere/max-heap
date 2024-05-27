// CS 3100 Project 6 by Jinho Nam
// There must be "MaxHeap.h" and "MaxHeap.cpp" files in the same directory

#include "MaxHeap.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // // -----------------------------------------------------------
    // // Test default constructor
    // cout << "Test default constructor" << endl;
    // MaxHeap myHeap1;
    // cout << myHeap1 << endl;
    // // cout << myHeap1.peek() << endl << endl;
    // // cout << myHeap1.poll() << endl << endl;
    // // -----------------------------------------------------------


    // // -----------------------------------------------------------
    // // Test copy constructor
    // cout << "Test copy constructor" << endl;
    // myHeap1.offer(77);
    // myHeap1.offer(7777);
    // MaxHeap myHeap2(myHeap1);
    // cout << myHeap1 << endl;
    // cout << myHeap2 << endl << endl; // The result should be {7777, 77}
    // // -----------------------------------------------------------


    // // -----------------------------------------------------------
    // // Test copy assignment operator
    // cout << "Test copy assignment operator" << endl;
    // MaxHeap myHeap3(myHeap2);
    // myHeap3.offer(777777);
    // cout << myHeap2 << endl;
    // cout << myHeap3 << endl; // The result should be {777777, 77, 7777}
    // myHeap3 = myHeap2;
    // cout << myHeap3 << endl << endl; // The result should be {7777, 77}
    // // -----------------------------------------------------------


    // // -----------------------------------------------------------
    // // Test inserting a whole array
    // cout << "Test inserting a whole array" << endl;
    // int test[] {21, 8, 7, 16, 52, 35};
    // MaxHeap myHeap4(test, 6);
    // cout << "Dumping a whole array: " << myHeap4 << endl << endl;
    // // The result should be {52, 21, 35, 16, 8, 7}
    // // -----------------------------------------------------------


    // // -----------------------------------------------------------
    // // Test inserting one by one
    // cout << "Test inserting one by one" << endl;
    // MaxHeap myHeap5;
    // myHeap5.offer(21); // heap[0]
    // myHeap5.offer(8); // heap[1]
    // myHeap5.offer(7); // heap[2]
    // myHeap5.offer(16); // heap[3]
    // myHeap5.offer(52); // heap[4]
    // myHeap5.offer(35); // heap[5]
    // cout << "Inserting one by one: " << myHeap5 << endl << endl;
    // // The result should be {52, 21, 35, 8, 16, 7}
    // // -----------------------------------------------------------


    // // -----------------------------------------------------------
    // // Test poll()
    // cout << "Test poll()" << endl;
    // cout << "Before poll() " << myHeap5 << endl;
    // cout << "Polling: " << myHeap5.poll() << endl;
    // cout << "After poll(): " << myHeap5 << endl;
    // cout << "Peeking: " << myHeap5.peek() << endl << endl;
    // // -----------------------------------------------------------


    // // -----------------------------------------------------------
    // // Test sorted()
    // cout << "Test sorted()" << endl;
    // vector<int> testVector = myHeap5.sorted();
    // for (int value : testVector) {
    //     cout << value << " ";
    // }
    // cout << endl << endl;
    // // The result should be {35, 21, 16, 8, 7}
    // // -----------------------------------------------------------


    // // -----------------------------------------------------------
    // // Test dynamic array sizing
    // MaxHeap testHeap;
    // cout << "Insert 19(0 - 18) elements to an empty array" << endl;
    // for (int i = 0; i < HEAP_MIN_SIZE - 1; i++) {
    //     testHeap.offer(i);
    // }
    // cout << testHeap << endl;
    // // Print out the sorted array to check
    // vector<int> sortedArray1 = testHeap.sorted();
    // for (int value : sortedArray1) {
    //     cout << value << " ";
    // }
    // cout << endl;
    // cout << "The number of elements is " << testHeap.getCount() << endl;
    // cout << "The array size is " << testHeap.getSize() << endl << endl;
    
    // // Added 1 more element
    // testHeap.offer(19);
    // // The array size should be 40 at this point
    // cout << "Offered 19" << endl;
    // cout << testHeap << endl;
    // // Print out the sorted array to check
    // vector<int> sortedArray2 = testHeap.sorted();
    // for (int value : sortedArray2) {
    //     cout << value << " ";
    // }
    // cout << endl;
    // cout << "The number of elements is " << testHeap.getCount() << endl;
    // cout << "The array size is " << testHeap.getSize() << endl  << endl;
    
    // // Inserted 30 elements more
    // for (int i = 0; i < 30; i++) {
    //     testHeap.offer(22);
    // }
    // cout << "Added 30 more elements" << endl;
    // cout << testHeap << endl;
    // cout << "The number of elements is " << testHeap.getCount() << endl;
    // cout << "The array size is " << testHeap.getSize() << endl  << endl;

    // // Polled 30 elements
    // for (int i = 0; i < 30; i++) {
    //     testHeap.poll();
    // }
    // cout << "Polled 30 elements" << endl;
    // cout << testHeap << endl;
    // cout << "The number of elements is " << testHeap.getCount() << endl;
    // cout << "The array size is " << testHeap.getSize() << endl << endl;

    // // Polled 10 elements
    // for (int i = 0; i < 10; i++) {
    //     testHeap.poll();
    // }
    // cout << "Polled 10 elements" << endl;
    // cout << testHeap << endl;
    // cout << "The number of elements is " << testHeap.getCount() << endl;
    // cout << "The array size is " << testHeap.getSize() << endl << endl;

    // // Polled 10 elements again
    // for (int i = 0; i < 10; i++) {
    //     testHeap.poll();
    // }
    // cout << "Polled 10 elements" << endl;
    // cout << testHeap << endl;
    // cout << "The number of elements is " << testHeap.getCount() << endl;
    // cout << "The array size is " << testHeap.getSize() << endl << endl;

    // // Poll() on the array with 0 size
    // cout << "Trying to poll() on the empty array." << endl;
    // cout << "This should be given an error." << endl;
    // testHeap.poll();
    // // -----------------------------------------------------------
    
    return 0;
}