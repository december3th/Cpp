#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		long int n , p;
		cin >> n  >> p;
		int dem = 0;
		for ( long int i = 1 ; i <= n ; i ++) {
            long int k = i;
			while ( k % p == 0 && k >=p) {
				dem ++;
				k = k / p;
			}
		}
		cout << dem << endl;
	}
}
	

