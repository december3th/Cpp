#include<bits/stdc++.h>
using namespace std;
long long pa(int n , long long k ) {
	int x = pow(2,n-1);
	if (x == k ) return n;
	else if ( k < x) return pa(n-1,k);
	else return pa(n-1,k-x);
}
main (){
	int t ; cin >> t ;while(t--) {
		int n ; long long k ; cin >> n >>  k;
		cout << pa(n,k) << endl;
	}
}
