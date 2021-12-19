#include<bits/stdc++.h>
using namespace std;
main () {
	int k ;
	cin >> k;
	while (k--) {
	   long int n;
	   cin >> n;
	   long int a[n];
	   for ( int i = 0 ; i < n ; i++) cin >> a[i];
	   long int b[n];
	   int dem = 0 ;
	   b[dem++] = a[0] * a[1];
	   for ( int i = 1 ; i < n -1 ; i++) {
	   	   b[dem++] = a[i-1] * a[i+1];
	   }
	   b[dem++] = a[n-1] * a[n-2];
	   for ( int i = 0 ; i < n ; i++) cout << b[i] << " ";
	   cout << endl;
	}
}

