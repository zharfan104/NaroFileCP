#include <bits/stdc++.h>
using namespace std; 

int fc[100000];
int result[1001] = {0};
/* 
 * Find Factorial of a Number using Dynamic Programming 
 */
long long fact_dp(int n)
{
    if (n >= 0) 
    {
        result[0] = 1;
        for (int i = 1; i <= n; ++i) 
        {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
}
int T,N,Q,org[1001],pengen;
int main(){
	long long x,n,sum=0,c;
	map<int, int> harga;
	cin >> T;

	while(T--){
	cin >> x >> n;
	for(int i=0;i<n;i++){
		cin >> c;
		sum = sum + fact_dp(n);
	}
	cout << sum << endl;
	sum =0;
	}
	return 0;
}

