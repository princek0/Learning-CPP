#include <iostream> 
#include <deque>
using namespace std;

int main(){
    long int n;
    cin >> n;

    if (n == 1){
        cout << 1;
    } else if (n == 2 || n == 3){
        cout << "NO SOLUTION";
    } else{
        deque<int> answer = {3, 1, 4, 2};

        for (int i = 5; i <= n; i++){
            if (i % 2 == 0){
                answer.push_back(i);
            } else{
                answer.push_front(i);
            }
        }

        for (int i = 0; i < n; i++){
            cout << answer[i] << " ";
        }


    }

    return 0;
}
