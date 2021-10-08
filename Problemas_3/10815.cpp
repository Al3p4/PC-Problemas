// Problema 3 - P5 -> Accepted 
//10815 - El primer diccionario de Andy

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
    string line;
    set<string> words;
    
     while (!cin.eof()) {
        cin>>line;
        int size = line.size();
        
        string current = "";
        for (int i = 0; i < size; ++i){
            char c = tolower(line[i]);
            if (isalpha(c)){
                current += c;
            }
            else if (current != ""){
                words.insert(current);
                current = "";
            }
        }
        if (current != ""){
            words.insert(current);
        }
    }
    set<string>::iterator it = words.begin();
    while (it != words.end()) {
      cout << *it <<endl;
      it++;
    }
    return 0;
}
