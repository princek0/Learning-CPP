#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = 0;
    long long current;

    for (int i = 1; i < n; i++){
        cin >> current;
        sum += current;
    }


    cout << ((n*(n+1))/2) - sum;

    return 0;
}