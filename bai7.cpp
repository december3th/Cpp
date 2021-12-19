#include<iostream>
using namespace std;
int main () {
	int l;
	cin >> l ; 
	while ( l--) {
		int k , n ;
		cin >> k >> n ;
		int a[k][n];
		int b[10000] , dem = 0;
		for ( int i = 0 ;  i < k ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				cin >> a[i][j];
				b[dem++] = a[i][j];
			}
		}
		
		for ( int i = 0 ; i < dem ; i++) {
			for ( int j = 0 ; j < dem ; j++) {
				if ( b[i] < b[j] ) {
					int swap = b[i] ;
					b[i] = b[j];
					b[j] = swap;
				}
			}
		}
		for (int i = 0 ; i < dem ; i++) cout << b[i] << " ";
	}
}
