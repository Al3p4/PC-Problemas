
// Problema 2  - P2 -> Accepted 
// 11547 - Respuesta automática

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int T;
    cin >> T;
    
    while (T--){
        int n;
        cin >> n;
        long long num =( ( ( ( (n * 567) /9 ) + 7492) * 235)/47 )- 498;
        num = num /10 ;
        cout << abs(num%10) <<endl;
    }return 0;
}
