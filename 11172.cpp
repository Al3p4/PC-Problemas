// Problema 1 - P5 ->  Accepted
// 11172 - Operador relacional
#include <iostream>

using namespace std;

int main(){
    int T ;
    int a , b ;
    cin>>T;
    while(T!=0){
    	cin>>a>>b;
    	if(a>b){
    	    cout<<'>'<<endl;
    	}
    	if(a<b){
    	    cout<<'<'<<endl;
    	}
    	if(a==b){
    	    cout<<'='<<endl;
    	}T--;
	}
    return 0;
}
