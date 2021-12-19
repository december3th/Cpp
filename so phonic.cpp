#include<bits/stdc++.h>
using namespace std ;
main () {
	int k;
	cin >> k ;
	while ( k -- ) {
		long int n;
		cin >> n;
		long long a;
		int kt ;
		int dem = 0 ;
		int dem1 = 0 ;
		for ( int i  = 2 ; i <= sqrt(n); i++) {
			int kt = 0;
			while ( n % i == 0) {
				kt = 1 ;
				dem1++;
				n = n / i;
			}
			if (kt == 1) dem++;
		}
		if (n > 1 ) {
			dem++;
			dem1++;
		}
		if ( dem == 3 && dem == dem1) cout << "1";
		else cout << "0";
		cout << endl;
	}
}

