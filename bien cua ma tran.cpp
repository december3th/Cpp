#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		int a[200][200];
		int n;
		cin >> n ;
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				cin >> a[i][j];
			}
		}
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				if (i == 0 || i == n - 1 || j == 0 || j == n - 1 ) cout << a[i][j] <<	" ";
				else cout <<"  ";
			}
			cout << endl;
		}
		cout << endl;
	}
}
