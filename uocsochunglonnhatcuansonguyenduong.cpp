#include<bits/stdc++.h>
#include <algorithm>

using namespace std ;

main () {
	int k;
	cin >> k ;
	while ( k -- ) {
		long long int n;
		cin >> n;
		long long dem = 1;
		for ( long long  i = 1 ; i <= n; i ++) {
			dem = (dem *i ) / std::__gcd(i,dem);
		}
		cout << dem;
		cout << endl;
	}
}


