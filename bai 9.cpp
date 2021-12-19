#include<iostream>
using namespace std;
main () {
	int k;
	cin >> k ;
	while ( k--) {
		long long n;
		cin >> n ;
		long long a[n] ;
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		int j = 0 ;
		int dem ;
		while ( j < n ) {
			int dem = 0 ;
		for ( int i = 0 ; i < n ; i++) {
			if ( a[i] == j ) {
			cout << j << " ";
			
		}
			else dem ++;
		}
		if ( dem == n) {
		cout << "-1" << " ";
		}
		j++;
       }
       cout << endl;
	}
	
}
