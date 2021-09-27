/* 12157 - Plan Tarifario */
#include <iostream>

using namespace std;

int main(){
    int T , N ,L ,Mile ,Juice;
    cin>>T;
    
    for(int i =1; i<=T; i++){
        cin>>N;
        Mile =0;
        Juice =0;
        while(N!=0){
            cin>>L; 
            Mile = Mile + (L  / 30) * 10 + 10 ;
            Juice = Juice + (L / 60) * 15 + 15;
            N--;
        }
        if (Mile < Juice){
                cout<< "Case "<<i<<": Mile "<<Mile<<endl;
        }
         if (Mile > Juice){
            cout<< "Case "<<i<<": Juice "<<Juice<<endl;
        }
        if (Mile == Juice){
           cout<< "Case "<<i<<": Mile Juice "<<Mile<<endl;
        }
    }
    return 0;
}
