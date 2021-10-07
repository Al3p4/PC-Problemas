// Problemas 3 - P4  -> Wrong answer
// 11988 - Broken Keyboard
#include <iostream>
#include <list>
#include <cstring>

using namespace std;

int main() {
    char line[100001];
    while (!cin.eof()) {
        cin>>line;
        list<char> l;
        int len = strlen(line);
        list<char>::iterator it = l.begin();

        for (int i = 0; i < len; i++) {
            if (line[i] == '[') {
                it = l.begin();
            } else if (line[i] == ']') {
                it = l.end();
            } else {
                l.insert(it, line[i]);
            }
        }
        for (it = l.begin(); it != l.end(); it++) {
            cout<<*it;
        }
        cout<<endl;
    }
    return 0;
}
