
// Problema 4 - P2 -> Accepted
//11136 - Engaño o qué

#include <iostream>
#include <set>

using namespace std;

int main(){
    int Qnum;
    
    while (cin >> Qnum, Qnum){
        multiset<int> num;
        long long cost = 0;
        
        while (Qnum--){
            int p;
            cin >> p;
            
            while (p--){
                int t;
                cin >> t;
                num.insert(t);
            }
            multiset<int>::iterator lowest = num.begin();
            multiset<int>::iterator highest = --num.end();

            cost += *highest - *lowest;
            num.erase(lowest); num.erase(highest);
        }
        cout << cost <<endl;
    }return 0;
}
