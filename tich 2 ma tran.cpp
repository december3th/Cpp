#include<bits/stdc++.h>
using namespace std;
void input(int a[][100],int n, int m ) {
	for ( int i = 0 ; i < n ; i++) {
		for ( int j = 0 ; j < m ; j++) {
			cin >> a[i][j];
		}
	}
}
main () {
	int a[100][100],b[100][100],c[100][100];
	int n , m , l ;
	cin >> n >> m >> l;
	input(a,n,m);
	input(b,m,l);
	for ( int i  =  0 ; i < n ; i++) {
		for ( int j = 0 ; j <  l; j++) {
			c[i][j] = 0 ;
			for ( int k = 0 ; k < m ; k++) {
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	}
	for ( int i  =  0 ; i < n ; i++) {
		for ( int j = 0 ; j <  l; j++) {
			cout << c[i][j] << " ";
	   }
	   cout << endl;
    }
}
