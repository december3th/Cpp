#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while(k--) {
		int a[200][200];
		int n;
		cin >> n ;
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				cin >> a[i][j];
			}
		}
		int s[2000], dem = 0 ;
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				if ( i % 2 == 0) s[dem++] = a[i][j];
				else s[dem++] = a[i][n-j -1];
			}
		}
		for ( int i = 0 ; i < dem ; i++) cout << s[i] << " ";
		cout << endl;
   }
}
