// Problema 1 - P4 ->  Accepted
// 11044 - Buscando a Nessy

#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while( t!=0 ){
		int n, m;
		cin >> n >> m;
		cout << (n/3) * (m/3) << endl;
		t--;
	}
	return 0;
}
