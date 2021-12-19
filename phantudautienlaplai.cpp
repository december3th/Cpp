#include<bits/stdc++.h>
using namespace std;
int check(long int a[] , int c ,int  d) {
	for ( int i = c ; i < d ; i++) {
		for ( int j = i + 1 ; j < d ; j++) {
			if (a[i] == a[j]) return 0;
 		}
	}
	return 1;
}
main () {
	int k;
	cin >> k;
	while (k--) {
		long int n;cin >> n;
		long int a[n];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		int kt = 0 ;
		for ( int i = 0 ; i < n  ; i++) {
			for ( int j = i + 1 ;j < n ; j++) {
				if (a[j] == a[i] && check(a,i,j)) {
					cout << a[i] << endl;
					kt = 1;
					break;
				}
			}
			if (kt == 1) break;
		}
		if (kt == 0) 
		cout << "-1" << endl;
	}
}

