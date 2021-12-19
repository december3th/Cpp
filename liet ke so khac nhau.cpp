#include<bits/stdc++.h>
using namespace std;
main () {
	int n;
	cin >> n;
	int a[n];
	int b[1000] = {0};
	for ( int i = 0 ; i < n ; i ++) cin >> a[i];
	for ( int i = 0 ; i < n ; i ++) {
		b[a[i]] ++;
	}
	for ( int i = 0 ; i < 1000 ; i++) {
		if (b[i] >= 1) cout << i << " ";
	}
	cout << endl;
}
