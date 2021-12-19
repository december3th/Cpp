#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		int n ,count , dem,dem1 = 0 ,dem2 = 0 ;
		cin >> n ;int a[n],b[10000] ,c[10000];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		sort(a,a+n);
		//for ( int i = 0 ; i < n ; i++) cout << a[i];
		for ( int i = 0  ; i < n  ; i++) {
			dem = 0 ;
			count = 1 ;
			for ( int j = 0  ; j < n  ; j++) {
				if (i == j) continue;
				if (a[i] == a[j] && i > j) dem = 1;
				if (a[i] == a[j]) count++;
			}
			if (dem == 0 ) {
				b[dem1++] = count;
				c[dem2++] = a[i];
		    }
	    }
		for ( int i = 0 ; i < dem1 ; i++) {
			for ( int j = 0 ; j < dem1 ; j++) {
				if (b[i] > b[j] )  {
					int swap = b[i];
					b[i] = b[j];
					b[j] = swap;
					int swap1 = c[i];
					c[i] = c[j];
					c[j] = swap1;
			    }
				else if (b[i] == b[j] && c[i] < c[j]) {
					int swap3= b[i];
					b[i] = b[j];
					b[j] = swap3;
					int swap4 = c[i];
					c[i] = c[j];
					c[j] = swap4;
					
				} 	
			}
				
		}
 		int  dem4 =  0;
		for ( int i = 0 ; i < dem1 ; i++) {
			for ( int j = 0 ; j < b[i] ; j++) {
				cout << c[i]  << " " ;
			}
		}
		cout << endl;	
	}	
}
