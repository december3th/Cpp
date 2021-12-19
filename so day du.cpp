#include<bits/stdc++.h>
using namespace std;
int kt( char a[] , int n) {
	int kt = 0 , kt1 = 0;
	for ( int i = 0 ; i < n ; i++) {
		if ('0' <= a[i] && a[i] <= '9') {
			kt ++;
		}
		else kt1 ++;
		if (kt1 > 0) break;
	}
	if (kt1 > 0) return 0;
	return 1;
}
main () {
	int k;
	cin >> k;
	cin.ignore();
	while (k--) {
		char a[1000];
		cin >> a;
		int n = strlen(a);
		if (kt(a,n) == 0 || a[0] == '0') cout <<"INVALID" << endl;
		else {
			int count = 0 ;
			char b[12] = "0123456789";
			int i = 0 ;
			int dem1,dem;
			int kt = 0 ;
			cout << endl;
			while ( i <= 9) {
				dem1 = 0;
				dem = 0 ;
				for ( int j = 0 ; j < n ; j++) {
					if (b[i] == a[j]) {
						count++;
						i++;
					} else dem++;;
					if (dem == n ) {
						i++;
					}
				}
			}
			if (count == 10 ) cout <<"YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
