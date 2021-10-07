// Problemas 3 - P3  -> Wrong answer
//673 parentesis 
#include <iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> parentesis;
    int n,i;
    string s;
    cin>>n;
    while (n--){
        cin>>s;
        for (i = 0; i < s.length(); i++){
            if (s[i] == '(' || s[i] == '[')
                parentesis.push(s[i]);
            else if (s[i] == ')'){
                if (!parentesis.empty() && parentesis.top() == '('){
                    parentesis.pop();
                }
                else{
                    break;
                }
            }
            else if (s[i] == ']'){
                if (!parentesis.empty() && parentesis.top() == '['){
                    parentesis.pop();
                }
                else{
                    break;
                }
            }
        }
        if(parentesis.empty() && s[i] == 0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        while (!parentesis.empty()){
            parentesis.pop();
        }
    }
    return 0;
}
