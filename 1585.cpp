/*1585 - Score*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t!=0){
        t =t-1;
        string linea;
        cin >> linea;
        int score = 0;
        int x = 0;
        
        for (int i = 0; i < linea.size(); ++i){
            if (linea[i] == 'O')
            {
                x = x + 1;
                score = score + x;
            }
            else
                x = 0;
        }
        cout << score << '\n';
    }
}

