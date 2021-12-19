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
		for ( int i  = 2 ; i <= sqrt(n); i++) {
			int dem = 0 ;
			kt = 0 ;
			while ( n % i == 0) {
				kt = 1 ;
			    dem++;
				n = n / i;
			}
			if (kt == 1)
			cout << i << " " << dem << " ";
		}
		if (n > 1 ) cout << n << " " << 1;
		cout << endl;
	}
}

