#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main () {
	tester() {
		int n , k ; cin >> n >> k;
	    long int a[n] , maxx ,  b[n+5]; for ( int i = 0 ; i < n ; i++) cin >> a[i];
	    for ( int i = 0 ; i < n - k + 1 ; i ++) {
	    	b[i] = a[i];
		   for ( int j = i ; j < i + k  ; j++) {
			  b[i] = max (b[i],a[j]);
		    }
		   cout << b[i] << " ";
	    }
	   cout << endl;
	}
}
