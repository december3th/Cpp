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
		for (int i = 0 ; i < n ; i++) {
			b[i] = 1;
			for ( int j = 0 ; j < i ; j++) {
				if (a[i] > a[j]) b[i] = max (b[i],b[j] + 1);
			}
			dem = max (dem,b[i]);
     	}
		
		cout << dem << endl;
   }	
}

