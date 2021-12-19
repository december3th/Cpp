#include<bits/stdc++.h>
using namespace std ;
long long mod = 1e9 + 7 ;
long long mu(long long n , long long k){
    if(k==0) return 1 ;
    if(k%2==0) return (mu(n,k/2) * mu(n,k/2)) % mod ;
    else return n*mu(n,k-1)%mod ;
}
long long dao(long long n) {
	long long m = n;
	long long sum = 0 ;
	while( m != 0) {
		sum = sum * 10 + m % 10;
		m = m / 10 ;
	}
	return sum;
}
int main(){
    int t ;
    cin >> t ;
    while(t--){
        long long n; cin >> n;
        long long m = dao(n);
        cout << mu(n,m);
        cout << endl ;
    }
}
