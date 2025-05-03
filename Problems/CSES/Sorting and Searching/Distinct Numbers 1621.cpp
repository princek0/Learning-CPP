#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int n;
    unordered_set<int> s;

    cin >> n;
    for (int i = 0; i<n; i++){
        int number;
        cin >> number;
        s.insert(number);
    }

    cout << s.size();

    return 0;

}