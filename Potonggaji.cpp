#include <iostream>
using namespace std;
long long hasil(long long unsigned N,long long unsigned M, long long unsigned sum, long long unsigned A[]);

long long unsigned  N,M,T,sum;
int main(){
	cin >> T;
	while(T--){	
	cin >> N >> M;
	long long unsigned A[M+1];
	for(int i=0;i<N;i++){
		cin >> A[i];
		sum = sum+A[i];
	}
	if(sum<=M){
		cout << -1;
	}
	else{
		cout << hasil(N,M,sum,A);
	}
}	
}
long long hasil(long long unsigned N,long long unsigned M, long long unsigned sum, long long unsigned A[]){
	if(sum <= M){
		return -1;
	}
	else{
		return 1;
	}
}

