#include <iostream> 

using namespace std;

int main(){
    int sum = 0;

    for (int i = 1; i<1000;i++){
        if (i % 3 == 0){
            sum += i;
        } else if (i % 5 == 0){
            sum += i;
        }
    }

    cout << sum; // Prints 233168 which is the correct answer.

    return 0;
}