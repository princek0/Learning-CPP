#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

/*
    I think this is O(n^2)?

    Oh I just realised you don't need the while loop you can just iterate just through each element lol: https://www.geeksforgeeks.org/cses-solutions-repetitions/

    You also don't need heap you can just update a variable if the current repetitions is higher than it
*/

int main(){

    string s;
    cin >> s;

    vector<char> sequence(s.begin(), s.end()); // input in array

    priority_queue<int> repetitions; // max heap of highest number of repetitions

    for (int i; i < sequence.size(); i++){ // iterate through each character in array
        int current_repetitions = 1;
        while (sequence[i] == sequence[i+1]){
            current_repetitions++;
            i++;
        }

        repetitions.push(current_repetitions);
    }


    cout << repetitions.top();
    return 0;
}