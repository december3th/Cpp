#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k ;
	while ( k --) {
		long int n ;
		cin >> n ;
		long int a[n];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		sort (a,a+n);
		int dem = 0  ;
		for ( int i = 0 , j = n - 1; i < n , j > 0 ; i++ , j--) {
		    if ( dem == n) break;
			cout << a[j] << " " ;
			if ( dem == n) break;
			dem++;
			if ( dem == n) break;
			cout << a[i] << " ";
			if ( dem == n) break;
			dem++;		
			if ( dem == n) break;	
		}
	//	cout << dem << endl;
		cout << endl;
	}
}
