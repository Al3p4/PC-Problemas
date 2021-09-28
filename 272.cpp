// Problema 1 - P1 ->  Wrong answer
// 272 - Cotizaciones TEX

#include <iostream>
#include <string>

using namespace std;

int main(){
  int tam;
  bool first = true;
  string text;
  int i =0;
  while(getline (cin,text)){      
            tam = text.size();
            while (tam - i !=0) {
                if (text[i] =='"' & first == true ){
                    text.erase(i,1);
                    text.insert(i,"``");
                    first = false;
                    
                }if (text[i] == '"' & first == false ){
                    text.erase(i,1);
                    text.insert(i, "''");  
                    first = true;
                }i++;
            }i=0;
    cout<<text<<endl;
  }
 return 0;   
}
