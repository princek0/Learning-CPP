#include <iostream>
#include <vector>

using namespace std;

int main(){

    long int n;
    cin >> n;

    vector<int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    long long int moves = 0;

    for (int i = 0; i < n-1; i++){


        if (array[i] > array[i+1]){
            int additional_moves = array[i] - array[i+1];
            moves += additional_moves;
            array[i+1] = array[i];
        }

    }

    cout << moves;

    return 0;
}