#include<bits/stdc++.h>
using namespace std;
main () {
	int k ;
	cin >> k;
	while ( k --) {
		long int n ;
		cin >> n ;
		long int a[n];
		for ( int i = 0 ; i < n ; i++ ) cin >> a[i];
		sort (a,a+n);
		int kt = 0 ;
		for ( int i = 0 ; i < n - 1 ; i ++) {
			if (a[i] != a[i+1]) kt ++;
		}
		if ( kt == 0 ) cout << "-1";
		else cout << a[0] <<" "<< a[1] ;
	    cout << endl;	
	}
}
