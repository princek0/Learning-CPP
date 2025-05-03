#include <iostream> 
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    freopen("herding.in", "r", stdin);
    freopen("herding.out", "w", stdout);

    int cows[3];
    

    cin >> cows[0];
    cin >> cows[1];
    cin >> cows[2];

    sort(cows, cows+3);

    if (cows[2]-cows[1]== 1 && cows[1]-cows[0] == 1){
        cout << 0 << endl;
        cout << 0 << endl;

    } else if (cows[1]-cows[0] == 2 || cows[2]-cows[1] == 2){
        cout << 1 << endl;
        cout << max(cows[1]-cows[0], cows[2]-cows[1])-1 << endl;
    } else{
        cout << 2 << endl;
        cout << max(cows[1]-cows[0], cows[2]-cows[1])-1 << endl;
    }

    return 0;
}

// https://usaco.org/index.php?page=viewproblem2&cpid=915