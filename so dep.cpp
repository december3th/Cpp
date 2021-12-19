#include<bits/stdc++.h>
using namespace std;
int kt(string a,int n) {
	int c = 0 , d = n - 1;
	while( c <= d ) {
		if (a[c] != a[d]) return 0;
		c++;d--;
	}
	return 1;
}
main () {
	int k;
	cin >> k;
	while (k--) {
		string a;
		cin >> a;
		int n = a.length();
		int kt1 = 0 ;
		for ( int i = 0 ; i < n ; i++) {
			if (a[i] % 2 == 0) {
				kt1++;
			}
		}
		if (kt(a,n) == 1 && kt1 == n) cout << "YES";
		else cout << "NO";
	}
}
