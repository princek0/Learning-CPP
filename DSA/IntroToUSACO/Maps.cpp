#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

/*
    Maps are set of ordered pairs each containing a key and a value (definition).

    All keys must be unique but values can be repeated. 

    Maps have three primary methods:
    1. One to add a specific key-value pairing
    2. One to retreieve the value for a given key
    3. One to remove a key-value pairing

    Maps can be unordered or ordered. 

    In an unordered map, hashing is used to support O(1).
    In an ordered map, entries are sorted in order of key. Operations are O(logn). 

*/

/*

    In unordered maps, 

    u_m[key] = value operator assigns a value to a key and places the pair into the map.

    u_m[key] returns the value

    count(key) returns the number of times the key is in the map (0 or 1)

    erase(key) and erase(it) removes the entry associated with key or iterator

    Due to hashing, these operations are O(1). 

*/

/*

    Ordered maps support all operations of an unordered map and also:

    1. lower_bound(key) (returns iterator pointing to lowest entry geq to key)
    2. upper_bound(key) (returns iterator pointing to lowest entry strictly greater than key)

*/


int main(){

    // unordered_map 

    unordered_map<int, int> u_m;
    u_m[1] = 5; // [(1, 5)]
    u_m[3] = 14; // [(1, 5); (3, 14)]
    
    u_m.erase(1); // [(3,14)]

    cout << u_m.count(3) << endl; // 1

    // ordered_map 

    map<int, int> m;

    m[3] = 5; // [(3, 5)]
    m[11] = 4; // [(3, 5); (11, 4)]
    m[10] = 491; // [(3, 5); (10, 491); (11, 4)]
    cout << m.lower_bound(10)->first << " " << m.lower_bound(10)->second << '\n'; // 10 491

    cout << m.upper_bound(10)->first << " " << m.upper_bound(10)->second << '\n'; // 11 4

    m.erase(11); // [(3, 5); (10, 491)]

    return 0;
}