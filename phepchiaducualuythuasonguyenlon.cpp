#include<bits/stdc++.h>
using namespace std;
long long kt (string a,long long b) {
	long long c = 0 ;
	for (int i = 0 ; i < a.size() ; i++) {
		c = ( c * 10 + a[i] - 48) % b; 
	}
	return c;
}
long long solve ( long long a , long long b , long long c) {
	if ( b == 1) return a;
	long long x = solve (a,b/2 ,c);
	if ( b % 2 == 0 ) return ( x * x ) % c;
	else return ( (x * x) % c * a ) % c;
}
main () {
	int t ; cin >> t ; while(t--) {
		string s ; cin >> s;
		long long a , b; cin >> a >> b;
		cout << solve(kt(s,b),a,b) << endl;
	}
}
