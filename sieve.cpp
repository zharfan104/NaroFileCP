#include <bits/stdc++.h>
using namespace std;
  bool isPrime[10+1];
void sieve(int N) {
  
    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             // Mark all the multiples of i as composite numbers
             for(int j = i * 2; j <= N ;j += i)
                 isPrime[j] = false;
        }
    }
}
int main(){
	sieve[10];
	for(int i=0;i<10;i++){
			cout << isPrime[i];
	}

}
