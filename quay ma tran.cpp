#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main () {
	tester() {
		int n , m ;
		cin >> m >> n;
		int a[m][n];
		for ( int i = 0 ; i < m ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				cin >> a[i][j];
			}
		}
		int kq[m][n];
		int sohang = m , socot = n , p  = 0 ,count = 0 ;
		while ( count < n * m ) {
			if (count == n* m - 1) {
				kq[p][p] = a[p][p];
				break;
			}
			for ( int i = p + 1 ; i < socot ; i ++) {kq[p][i] = a[p][i-1]; count++;}
			for ( int i = p + 1 ; i < sohang ; i++) {kq[i][socot-1] = a[i-1][socot-1]; count ++; }
			for ( int i = socot - 2 ; i >= p ; i --) {kq[sohang-1][i] =a[sohang-1][i+1]; count++; }
			for ( int i = sohang - 2 ; i >= p ; i--) { kq[i][p] = a[i+1][p]; count++; }
			p++;socot--;sohang--; 
		}
		for ( int i = 0 ; i < m ; i++) {
			for ( int j = 0 ; j < n ; j++) {
				cout  << kq[i][j] << " " ;
			}
		}
		cout << endl;
	}
}
