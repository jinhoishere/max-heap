# Project6

Please zip your entire project directory into a single file called Project6.zip.

This project is worth 50 points, distributed as follows:
| Task                                                                                                                          | Points |
| ----------------------------------------------------------------------------------------------------------------------------- | ------ | 
|`MaxHeap::MaxHeap()` Correctly correctly creates an empty heap. `MaxHeap::MaxHeap(int * values)` Correctly creates a heap in _O(n)_ time by heapifying a copy of the array `values`.|5|
|`MaxHeap::offer` Correctly inserts items into the heap, maintaining the MAX-HEAP property at all times.	 |5|
|`MaxHeap::poll`  Correctly removes and returns the maximum value in the heap, maintaining the MAX-HEAP property at all times, and throws and exception when called on an empty heap. |5|
|Your heap correctly doubles in size when full. Your heap is never smaller than HEAP_MIN_SIZE, and never more than half-empty unless it cannot be halved without becoming smaller than HEAP_MIN_SIZE. |5|
|`MaxHeap::isEmpty` correctly returns true when the heap is emtpy, and false otherwise. 	|2|
|`MaxHeap::peek` correctly returns the maximum value in the heap without modifying the heap contents. 	|3|
|`MaxHeap::sorted` correctly creates and returns a sorted array from the heap contents.|5|
|`MaxHeap::operator=` and your copy constructor correctly produce independent copies of your heap. 	|5|
|operator<< is correctly overloaded for your heap class as described above. 	|5|
|Code is well organized, well documented, and properly formatted. Variable names are clear, and readable. Your AVLTree class is declared and implemented in separate (.cpp and .h) files. 	|5|
|Appropriate use of public and private class member data. No global variables or unnecessary member variables. Efficient and well-designed code. No memory leaks.|5|
