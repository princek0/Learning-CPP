#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int INF = 1e9;
vector<int> answers;
vector<int> coins; // list of coin values

int main(){
    int n; // number of coins
    int x; // desired number

    cin >> n;
    cin >> x;

    for (int i = 0; i < n; i++){
        int coin;
        cin >> coin;
        coins.push_back(coin);
    }

    answers.resize(x+1);
    answers[0] = 0;

    for (int i = 1; i<x+1; i++){
        int result = INF;
        for (int j = 0; j < (int) coins.size(); j++){

            if (i - coins[j] < 0){
                continue;
            }

            if (answers[i - coins[j]]+1 < result){
                result = answers[i - coins[j]]+1;
            }
        }
        answers[i] = result;
    }

    if (answers[x] >= INF){
        cout << -1;
    } else{
        cout << answers[x];
    }

    return 0;
}