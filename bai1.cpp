#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while(k--) {
		string a;
		cin >> a;
		int n = a.length();
		int dem = 0 , dem1 = 0 ;
		for ( int i = 0 ; i < n ; i ++ ) {
			if ( i % 2 == 0) dem = dem + a[i] - 48 ;
			else if ( i % 2 == 1) dem1 = dem1 + a[i] - 48;
		
		}
	//	cout << dem << " " << dem1 << endl;
		int sum ;
		if (dem > dem1) sum = dem - dem1 ;
		else sum = dem1 - dem;
		if ( sum % 11 == 0 ) cout << "1";
		else cout << "0";
		cout << endl;
    } 
}
