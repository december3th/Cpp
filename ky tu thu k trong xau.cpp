#include<bits/stdc++.h>
using namespace std;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
long long   kytu(int n , long long k ) {
	long long x = pow(2,n-1);
	if (k == x ) return n;
	else if (k < x) return kytu(n-1,k);
	else return kytu(n-1,k-x);
}
main () {
	int t ; cin >> t; while(t--) {
		int n  ;long long k;
		cin >> n >> k;
		cout << s[kytu(n,k)-1] << endl;
	}
}
