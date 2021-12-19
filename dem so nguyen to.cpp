#include<bits/stdc++.h>
using namespace std;
int snt(long int n ) {
	if (n < 2) return 0;
	int kt = 0 ;
	for ( int i = 2 ; i <= sqrt(n) ; i++) {
		if (n % i == 0) {
			return 0;
			kt = 1 ;
		}
		if (kt == 1 ) break;
	}
	return 1;
}
main () {
	int k;
	cin >> k;
	while(k--) {
	    long int a;
		long int n;
		cin >> n >> a;
		int dem  = 0;
		for ( int i = n ; i <= a; i++) {
			if (snt(i) == 1) dem++;
     }
     cout << dem << endl;
  }
 } 

