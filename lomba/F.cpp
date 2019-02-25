#include <bits/stdc++.h>
using namespace std;

int T,N,Q,org[1001],pengen;
int main(){
	map<int, int> harga;
	cin >> T;

	while(T--){
		cin >> N >> Q;
		for(int i=0;i<N;i++){
			cin >> org[i] >> harga[org[i]];
		}
		for(int i=0;i<Q;i++){
			cin >> pengen;
			
			cout << harga[pengen];
		
		}
		
	}
	return 0;
}

