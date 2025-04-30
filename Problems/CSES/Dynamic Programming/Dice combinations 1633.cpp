#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

int main(){

    // recursive approach
    
    
    int n;
    cin >> n;

    long long int combinations[n+1];

    for (int i = 1; i <= n; i++){
        if (i <= 6){
            combinations[i] = pow(2, i-1);
        } else{
            combinations[i] = (combinations[i-1] + combinations[i-2] + combinations[i-3] + combinations[i-4] + combinations[i-5] + combinations[i-6]) % MOD;
        }
    }

    cout << combinations[n];

    return 0;
}

// int ~ 10^9 
// long long int ~ 10^18