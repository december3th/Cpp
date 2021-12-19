#include<bits/stdc++.h>
using namespace std;
main () {
	int n; cin >> n ;int a[n+5];
	for ( int i = 0 ; i < n ; i++) cin >> a[i];
	for (int i = 0 ; i < n ; i++) cout << a[i] << " ";
	int dem = 0 ;
	while(next_permutation(a,a+n) ) {
		dem++;
		if (dem == 4 ) break;
		for ( int i = 0 ; i < n ; i++) cout << a[i] << " ";
		cout << endl;}	
	}


