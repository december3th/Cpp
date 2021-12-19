#include<bits/stdc++.h> 
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		int n;
		cin >> n;
		long int a[n];
		long int b[n * n] , dem  = 0 ;
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		for ( int i = 0 ; i < n  ; i++) {
			for ( int j = i + 1; j < n ; j ++) {
				if (a[j] - a[i] <= 0) continue;
				b[dem++] = a[j] - a[i];
			}
		}
		if (dem == 0 ) cout << -1 ;
		else {
			sort(b,b+dem);
			cout << b[dem -1 ];
		}
		cout << endl;
    }
}
