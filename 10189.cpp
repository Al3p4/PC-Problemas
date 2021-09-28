// Problema 2  - P8 ->  Runtime error
// 10189 - Buscaminas

#include <iostream>

using namespace std;

int main(){
    int f , c ;
    int cont = 0;
    while( cin>> f >> c && (f || c )){
      cont ++;
      char buscaCaminos [f][c];
      int field[f][c];
        for(int i = 0 ; i < f; i++){
            for(int j = 0 ; j < c; j++){
                cin>>buscaCaminos[i][j];
                field[i][j]=0;
            }
        }
         for(int i = 0 ; i < f; i++){
            for(int j = 0 ; j < c; j++){
                if (buscaCaminos[i][j] =='*'){
                    field[i][j]= -500;
                    field[i][j+1] +=1;
                    field[i+1][j] +=1;
                    field[i][j-1] +=1;
                    field[i-1][j] +=1;
                    field[i-1][j+1] +=1;
                    field[i+1][j-1] +=1;
                    field[i-1][j-1] +=1;
                    field[i+1][j+1] +=1;
                }
            }
        }
        cout<<endl << "Field #"<< cont <<":"<<endl;
        for(int i = 0 ; i < f; i++){
            for(int j = 0 ; j < c; j++){
                if(field[i][j] < 0 ){
                    cout<<'*';
                }
                else{
                cout<<field[i][j];
                }
            }cout<<endl;
        }
    }
    return 0;
}
