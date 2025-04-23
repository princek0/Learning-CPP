#include <iostream> 
#include <stack>
#include <queue> 
using namespace std;

/* 
   A stack is a Last in First Out (LIFO) data structure.
   It supports three operations:
   1. push (adds an element to the top)
   2. pop (removes an element from the top)
   3. top (retrives an element from the top)

   It can do all of this in O(1)
*/

/* A queue is a First in Firs out (FIFO) data structure.
   It supports three operations:
   1. push (insertion at the back)
   2. pop (deletion from the front)
   3. front (retrieves the element from the front)
   
   It can do all of this in O(1)
*/

int main(){

    // Stacks

    stack<int> s;

    s.push(1); // [1]
    s.push(13); // Bottom [1, 13] Top
    // cout << s.size() << endl; // 2

    cout << s.top() << endl; 

    s.pop(); // [1]
    // cout << s.top() << endl; // 1

    s.pop(); // []
    // cout << s.size() << endl; // 0

    // Queues

    queue<int> q;

    q.push(1); // Front [1] Back

    // cout << q.front() << endl;

    q.push(13); // [1, 13]

    // cout << q.front() << endl;

    q.pop(); // [13] (removes from Front)

    cout << q.front() << endl; // 13

    return 0;
}