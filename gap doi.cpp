#include<bits/stdc++.h>
using namespace std;
long long gapdoi(long long n , long long k ) {
	long long x = pow(2,n-1);
	if (k == x ) return n;
	else if (k < x) return (n-1,k);
	else return(n-1,k-2);
}
main () {
	int t ; cin >> t; while(t--) {
		long long  n , k ; cin >> n >> k;
		cout << gapdoi(n,k) << endl;
	}
}
