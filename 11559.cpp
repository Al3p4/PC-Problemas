
// Problema 2  - P5 ->  Accepted 
// 11559 - Planificación de eventos
#include <iostream>

using namespace std;

int main(){
    int N, B ,H ,W ,p ,a ,costo ,cama;

    while(cin >> N>> B>> H>>W){
    costo = B ;
        for(int i = 0; i < H;++i){
            cin>>p;
            cama = 0;
            
            for(int j = 0; j < W;++j){
                cin>>a;
                cama = max(cama,a);
            }
            if(cama >= N) {
                costo = min(costo,N * p);
            }
        }
        
        if(costo >= B){
            cout<<"stay home"<<endl;
        }
        else{
            cout<<costo<<endl;
        }
    }
    
    return 0;
}
