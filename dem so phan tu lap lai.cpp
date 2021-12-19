#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		int n;
		cin >> n ;
		int a[n];
		int dem  = 0 ;
		int count ;
		int kt ;
		for ( int i = 0 ; i < n ; i ++) cin >> a[i];
		for ( int i = 0 ; i < n ; i ++) {
			count = 1 ;
			kt = 0 ;
			for ( int j = 0 ; j < n ; j ++) {
				if (i == j) continue;
				if (a[i] == a[j] && i > j) kt = 1;
				if (a[i] == a[j]) count ++;
			}
			if (kt == 0 && count >= 2) {
			  dem = dem + count;
		    }
		}
		cout << dem;
		cout << endl;
	}
}
