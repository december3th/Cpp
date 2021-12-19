#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k ;
	while (k--) {
		int n ;
		cin >> n ;
		long long a[n+5];
		long long b[200000];
		long long dem =  0;
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		long long  dem1 ;
		for (int i = 0 ; i < n ; i++) {
			dem1 = 0 ; 
			for ( int j = 0 ; j < i ; j++) {
				if (a[i] > a[j]) dem1++;
			}
			dem = max (dem,dem1);
     	}
		
		cout << dem << endl;
   }	
}
