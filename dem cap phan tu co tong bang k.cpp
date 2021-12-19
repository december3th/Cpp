#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k ;
	while ( k --) {
		long int n ,l;
		cin >> n >> l;
		long int a[n];
		int dem = 0 ;
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		for ( int i = 0 ; i < n - 1; i++) {
			for ( int j = i + 1 ; j < n ; j++) {
				if (a[i] + a[j] == l) dem ++;
			}
		}
		cout << dem << endl;
	}
}

