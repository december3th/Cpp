#include<bits/stdc++.h>
using namespace std;
main () {
	int k ;
	cin >> k ;
	cin.ignore();
	while (k--) {
		int n;
		cin >> n ;
		long int a[n],b[n],c[n],d[n+100];
		int dem=0,dem1=0;
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		sort (a,a+n);
		int x = n / 2 ;
		for (int i = n - 1;i >= 0 ;i--) {
			b[dem++] = a[i];
			if (dem == x) break;
		}
		for ( int i = 0 ; i < n - dem ; i++) c[dem1++] = a[i];
		int dem2 = 0;
		int h = 0 , m = 0;
		for ( int i = 0 ; i < dem1 ; i ++) d[dem2++] = c[i];
		for ( int i = dem - 1 ; i >= 0; i--) d[dem2++] = b[i];
		int dem3 = 0;
		for ( int i = 0   ; i < dem2    ; i++ ) {
			if (dem3 == dem2) break;
			cout << d[i] << " " ;dem3++;
			if (dem3 == dem2 )break;
			cout << d[i+dem1] << " ";dem3++;
			if (dem3 == dem2) break;
			
		}
		cout << endl;
	}
}
