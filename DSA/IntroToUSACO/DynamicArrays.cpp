#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> v; //Initialising a dynamic array with integer elements
    v.push_back(2); // [2]
    v.push_back(3); // [2,3] We can add elements at the end in O(1) 

    v[1] = 4; // Sets element at index 1 to 4 --> [2,4], O(1)
    v.push_back(2); // [2,4,2]

    v.erase(v.begin()+1); // Removes element at index 1 --> [2,2], O(n)

    // v.begin() is an interator to the first element of the vector
    // v.end() is an eterator to one past the last, NOT the last
    // You can think of iterators like pointers

    v.erase(v.end()-1); // Removed last element --> [2], O(1)

    v.push_back(5); // [2,5]

    v.pop_back(); // Removes last element --> [2], O(1)

    v.push_back(1); // [2, 1]
    v.push_back(2); // [2, 1, 2]
    v.push_back(3); // [2, 1, 2, 3]
    v.push_back(4); // [2, 1, 2, 3, 4]
    v.push_back(5); // [2, 1, 2, 3, 4, 5]

    v.erase(v.begin(), v.begin()+3); // Erases first 3 elements --> [3,4,5]



    return 0;
}