// Problema 1 - P6 ->  Wrong answer **
// 11364 Estacionamiento 

#include <iostream>

using namespace std;

int main(){
    int T, N, xi, xf, x,resp;
    cin >> T;
    
    while (T!=0){
    xi = 0; xf = 99;
    cin >> N;
        for (int i = 0; i < N; ++i){
            cin>> x;
            if ( xi < x){
                xi = x;
            }
            if (xf > x){
                xf = x;
            }
        }T--;
        resp = (xi - xf)*2;
        cout << resp;
    }
    return 0;
}
