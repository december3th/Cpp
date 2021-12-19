#include<bits/stdc++.h>
using namespace std ;
main () {
	int k;
	cin >> k ;
	while ( k -- ) {
		long long a , b , c ,d;
		cin >> a >> b >> c >> d;
		long long max , min;
		if ( a > b) {
			max = a ;
			min = b;
		}
		else {
			max = b;
			min = a;
		}
		int dem = 0 ;
		for ( long long i = min ; i <= max; i ++ ){
			if ( i % c == 0 || i % d == 0) dem++;
		}
		cout << dem;
		cout << endl;
	}
}

