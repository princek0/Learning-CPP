#include <iostream> 
#include <vector>
using namespace std;

int main(){
    //freopen("herding.in", "r", stdin);
    //freopen("herding.out", "w", stdout);

    int N;

    cin >> N;

    vector<int> guesses;
    vector<int> pebbles = {1, 2, 3};

    for (int i = 0; i<N; i++){
        int temp;
        int a;
        int b;
        int g;

        cin >> a;
        cin >> b;
        cin >> g;

        temp = pebbles[a-1];
        pebbles[a-1] = pebbles[b-1];
        pebbles[b-1] = temp;

        guesses.push_back(pebbles[g-1]);
    }

    for (int i = 0; i<N; i++){
        cout << guesses[i] << ' ';
    }
}

// https://usaco.org/index.php?page=viewproblem2&cpid=891