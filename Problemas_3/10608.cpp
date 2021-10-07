// Problema 3 - P1 -> Accepted 
//10608 Amigos

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > Amigos;

int NumAmigos(int persona, vector<bool>& alc){
    if (alc[persona]){
        return 0;
    }
    alc[persona] = true;
    int sum = 1;
    for (int i = 0; i < Amigos[persona].size(); ++i){
        sum += NumAmigos(Amigos[persona][i], alc);
    }
    return sum;alc;
}

int main(){
    int t;
    cin >>t;
    
    while (t--){
        int n, m;
        cin >> n >> m;
        ++n;
        Amigos.assign(n, vector<int>());
        
        while (m--){
            int start, end;
            cin >> start >> end;
            Amigos[start].push_back(end);
            Amigos[end].push_back(start);
        }
        
        vector<bool> alc(n, false);
        int max = 1;
        for (int i = 0; i < n; ++i){
            int current = NumAmigos(i, alc);
            if (current > max)
                max = current;
        }
        
        cout << max <<endl;
    }
}
