#include <iostream>
#include <unordered_set>
#include <set>
#include <multiset>
using namespace std;

/*

An unordered set is a hash set. It assigns a unique code to every object which allows
- insertion
- deletion
- and searching 

in O(1). 

Elements are not ordered in any meaningful way so traversals will return elements in
some arbitrary order. 

The operations on an unordered set are:
1. insert (adds an element if not already present)
2. erase
3. count (returns 1 if the set contains the element and 0 if it doesn't)

*/

/*

In an ordered set, hashing is not used. Therefore, inserations, deletions, and searches
are O(logn).

As well as the operations supported by the unordered set, ordered sets allow:
1. begin() (returns an iterator to the lowest element in the set)
2. end() (return iterator to one past highest element in set)
3. lower_bound(k) (returns iterator to least element geq to k)
4. upper_bound(k) (returns iterator to least element strictly greater than k)

*/

/*

*/

int main(){

    // unordered sets

    unordered_set<int> u_s;

    u_s.insert(1); // [1]
    u_s.insert(4); // [1,4] in arbitrary order
    u_s.insert(4); // [1,4]

    cout << u_s.count(4) << endl; // 1

    u_s.erase(4); // [1]

    // ordered sets

    set<int> s;
    s.insert(1); // [1]
    s.insert(14); // [1, 14]
    s.insert(9); // [1, 9, 14]
    s.insert(2); // [1, 2, 9, 14]

    cout << *s.upper_bound(7) << '\n'; // 9
    cout << *s.upper_bound(9) << '\n'; // 14

    cout << *s.lower_bound(5) << '\n'; // 9
    cout << *s.lower_bound(9) << '\n'; // 9

    cout << *s.begin() << '\n'; // 1

    auto it = s.end();
    cout << *(--it) << '\n'; // 14

    s.erase(s.upper_bound(6)); // [1, 2, 14]

    // multiset

    return 0;
}
