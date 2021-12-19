#include<bits/stdc++.h>
using namespace std;
int main () {
	int l;
	cin >> l ; 
	while ( l--) {
		int k , n ;
		cin >> n >> k ;
		int a[n][n];
		int b[10000] , dem = 0;
		for ( int i = 0 ;  i < n ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				cin >> a[i][j];
				b[dem++] = a[i][j];
			}
		}
		sort (b,b+dem);
	    cout << b[k-1];
		cout << endl;
	}
}

