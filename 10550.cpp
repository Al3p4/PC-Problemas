// Problema 1 - P3 ->  Accepted
// 10550 - Candado de combinación

#include <iostream>

using namespace std;

int main() {
    int i ,x,y,z;
    int resp=0;
   while( cin>> i >> x >> y >> z && ( i || x || y || z ) ) {
            if ( i >= x ){
            	resp += ( i - x )*9;
            }
            if ( i <= x ){
            	resp += ( i + 40 - x )*9;
            }
            if ( x >= y ){
            	resp += ( 40 - x + y )*9;
            }
            if ( x <= y ){
            	resp += ( y - x)*9;
            }
            if ( y >= z ){
            	resp += ( y- z )*9;
            }
            if ( y <= z ){
            	resp += ( y + 40 - z )*9;
            }
            resp +=1080; 
            cout<<resp<<endl;
            resp = 0;
   }
   return 0;
}
