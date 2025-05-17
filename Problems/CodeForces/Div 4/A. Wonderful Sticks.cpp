#include <iostream>
#include <vector>


using namespace std;

int main(){

    int n;
    vector<string> s = {"<"};
    cin >> n;

    int arrangement[n];

    int c = 1;
    int d = n;

    string temp;
    cin >> temp;
    s.push_back(temp);

    for (int k=n; k>=0; k--){
        if (s[k] == "<"){
            arrangement[k] = c;
            cout << arrangement[k] << endl;
            c++;
        } else if (s[k] == ">"){
            arrangement[k] = d;
            cout << arrangement[k] << endl;
            d--;
        }

    }

    for (int i = 0; i<n; i++){
        cout << arrangement[i] << " ";
    }


    return 0;
}

// https://codeforces.com/problemset/problem/2096/A

// int t;
// cin >> t; 

// for (int i = 0; i<t; i++){
//     int n;
//     vector<string> s = {"<"};
//     cin >> n;

//     int arrangement[n];

//     int c = 1;
//     int d = n;

//     for (int j=0; j<n-1; j++){
//         string temp;
//         cin >> temp;
//         s.push_back(temp);
//     }
//     for (int k=n-1; k>=0; k--){
//         if (s[k] == "<"){
//             arrangement[k+1] = c;
//             c++;
//         } else if (s[k] == ">"){
//             arrangement[k+1] = d;
//             d--;
//         }
//     }

//     for (int _; _<n; _++){
//         cout << arrangement[_] << " ";
//     }
// }