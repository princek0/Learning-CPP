#include <iostream>
#include <queue>
using namespace std;

/*
    A priority queue is basically a heap (implemented as a binary heap)
    It supports the following operations in O(log(n)): 
    1. insertion of elements O(logn)
    2. deletion of the highest priority element O(logn)
    3. retrieval of the highest priority element O(1)

    Here are the main functions:
    1. push(x) which adds element x
    2. top() retrieves the highest priority element
    3. pop() removes highest priority element
    4. empty() returns true if empty in O(1)
    5. size() returns numebr of elements in O(1)

    The default priority is by largest size (Max-heap)

    You can make it a min-heap using priority_queue<int, greater<int>>

    You can even create your own operators to define the priority


*/


int main(){

    priority_queue<int> pq;

    pq.push(4); // [4]
    pq.push(2); // Bottom [2, 4] Top

    // etc
    
    return 0;

}

