#include<bits/stdc++.h>
using namespace std; 
main () {
	int k ;
	cin >> k ;
	while (k--) {
		long int n;
		cin >> n;
		long int a[n] , b[n] , c[n] , dem , dem1 = 0;
		for ( int i = 0 ; i < n ; i++)  cin >> a[i];
		for ( int i = 0 ; i < n ; i++)  b[i] = -1;
		for ( int i = 0 ; i < n ; i++) {
			dem = 0 ;
			for ( int j = 0 ; j < n ; j++) {
				if ( i == a[j]) {
					b[i] = i;
				}
			}
		}
		for ( int i = 0 ; i < n ; i++) cout << b[i] << " ";
		cout << endl;
	}
}

