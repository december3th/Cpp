#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main () {
	tester() {
		int n ;
		cin >> n ;
		int a[n+5],b[n+5] ={0};
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		b[0] = a[0];b[1] = a[1];
		for ( int i = 2 ; i < n ; i++) {
			b[i] = max (b[i-2] + a[i], b[i-1]);
		}
		cout << b[n-1];
		cout << endl;
	}
}
