// Problemas 3 - P2 -> Accepted
// 514 - Rails 

#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, p[1000];
    int i;
    while (true) {
        cin >> n;
        if (n == 0){
            break;
        }
        while (true) {
            cin >> p[0];
            if (p[0] == 0){
                cout << endl;
                break;
            }
            for (i = 1; i < n; i++) {
                cin >> p[i];
            }

            int at = 1, pIndex = 0;
            stack<int> arr;
            while(at<=n){
                arr.push(at);
                while(!arr.empty() && arr.top() == p[pIndex]){
                    arr.pop();
                    pIndex++;
                    if(pIndex>=n) break;
                }
                at++;
            }
            if(arr.empty()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }return 0;
}
