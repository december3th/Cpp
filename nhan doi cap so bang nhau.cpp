#include<bits/stdc++.h> 
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		int n;
		cin >> n;
		int a[n];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		for ( int i = 0 ; i < n - 1 ; i++) {
			if (a[i] == a[i + 1]) {
				a[i+1] = 0;
				a[i] = a[i] * 2;
			}
		}
		for ( int i = 0 ; i < n ; i++) if (a[i] != 0) cout << a[i] << " ";
		for ( int i = 0 ; i < n ; i++) if (a[i] == 0) cout << a[i] << " ";
		cout << endl;
	}
}
