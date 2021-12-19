#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while(k--) {
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ; j < m ; j++) {
				cin >> a[i][j];
			}
		}
		int b[20000],c[20000],dem = 0 , dem1 = 0;
		int kt = 0 ;
		
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ; j < m ; j++) {
			   if (a[i][j] == 1 ) {
			   	  b[dem++] = i;
			   	  c[dem1++] = j;
               }
		    }
	    }
	   for (int k = 0 ; k < dem ; k ++) {
	    for ( int i = 0 ; i < n ; i ++ ) {
	    	for ( int j = 0 ; j < m ; j ++) {
	    			if (i == b[k] && j == c[k] ) {
	    				for ( int l = 0 ; l < m ; l ++) a[i][l] = 1;
	    				for ( int g = 0 ; g < n ; g ++) a[g][j] = 1 ;
					}
				}
			}
		}
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = 0 ;j < m ; j++) {
				cout << a[i][j] << " ";
		    }
		    cout << endl;
       }
		cout << endl;
    } 
}
