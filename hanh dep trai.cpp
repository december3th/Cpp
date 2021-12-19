#include<bits/stdc++.h>
using namespace std;
main () {
	int n;
	cin >> n;
	int a[100];
	int b[10000];;
	for ( int i = 0 ; i < n ; i ++) cin >> a[i];
	for ( int i = 0 ; i < n ; i++) {
		int kt = 0;
		for ( int j = i ; j < n ; j ++) {
			if (a[i] == a[j]) kt = 1;
		}
		if (kt == 0) cout << a[i] << " ";
	}
}
