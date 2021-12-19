#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		string a;
		cin >> a;
		int n = a.length();
		int kt = 0;
		for ( int i = 0 ; i < n ; i++) a[i] = a[i] - 48;
		for ( int i = 0 ; i < n - 1 ; i++) {
			if (abs(a[i+1] - a[i]) != 1 ) {
				kt = 1;
				break;
			}
		}
		if (kt == 0) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
	
