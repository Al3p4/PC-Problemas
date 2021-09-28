// Problema 1 - P7 ->  Wrong answer
// 11498 - División de Nlogonia
#include <iostream>

using namespace std;

int main() {
    int k, n, m, x, y;
    int dx , dy;
    cin>>k;
    cin>>n>>m;
    while(k !=0) {
        cin>>x>>y;
        dx = x - n;
        dy = y - m;
            if(dx == 0 || dy == 0){
                cout<<"divisa"<<endl;
            }
            else if(dx > 0 && dy > 0){
                cout<<"NE"<<endl;
            }
            else if(dx < 0 && dy > 0){
                cout<<"NO"<<endl;
            }
            else if(dx < 0 && dy < 0){
                cout<<"SO"<<endl;
            }
            else{
                cout<<"SE"<<endl;
            }
        k--;
        }
    return 0;
}
