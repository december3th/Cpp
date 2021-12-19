#include<iostream>
using namespace std;
main () {
	int k ;
	cin >> k;
	while ( k--) {
	    long int n ;
		cin >> n;
		long int a[n];	for ( int i = 0 ; i < n ; i++) cin >> a[i];
		int b = 1;
		while ( 1 ) {
			int kt1 = 0 ;
			int dem = 0 ;
			for ( int i = 0 ; i < n ; i++) {
				int kt = 0 ;
				if ( a[i] == b) {
					b++;
					kt = 1;
				}
				else dem ++;
				if ( kt == 1 ) break;
			} 
			if ( dem == n) {
				cout << b ;
				kt1 = 1;
				break;
			}
			if (kt1 == 1) break;
		}
		cout << endl;
	}
}
// 5 8 3 7 9 1 
// 1
