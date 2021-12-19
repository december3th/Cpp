#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		long int n, l ;
		cin >> n >> l;
		long int a[n];
		long long c ;
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		int kt = -1;
		for ( int i = 0 ; i < n ; i++) {
			if ( a[i] == l ) {
				kt = 1 ;
				break;
			}

			if ( kt == 1) break;
		}
		cout << kt <<endl;
	}
	
}
