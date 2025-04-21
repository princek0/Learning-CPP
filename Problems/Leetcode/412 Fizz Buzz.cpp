#include <iostream>
#include <vector> 
#include <string>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer; // Basically a dynamic array

        for (int i = 1; i <= n;i++){
            if (i%3 != 0 && i%5 != 0){
                answer.push_back(to_string(i)); // We need to use push_back since the element doesn't already exist
            } else if (i%3 == 0 && i%5 != 0){
                answer.push_back("Fizz");
            } else if (i%3 != 0 && i%5 == 0){
                answer.push_back("Buzz");
            } else{
                answer.push_back("FizzBuzz");
            }
        }

        return answer;
    }
};