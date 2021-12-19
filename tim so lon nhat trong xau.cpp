#include<bits/stdc++.h>
using namespace std;
main () {
	int k ;
	cin >> k;
	cin.ignore() ;
	while ( k --) {
		string a;
		cin >> a ;
		int kt , dem ,dem1 ,dem2;
		int s[100];
		long long sum  ;
		long long sum1 = 0;
		for ( int i = 0 ; i < a.size(); i++) {
			if ('0' <= a[i] && a[i] <='9') continue;
			for ( int j = 0 ; j < a.size(); j++ ) {
				if ('0' <= a[j] && a[j] <='9') continue;
				if (a[i] < a[j]) {
					char swap = a[i];
					a[i] = a[j] ;
					a[j] = swap;
				}
			}
	    }
		for ( int i = 0 ; i < a.size(); i++) {
			if ('0' <= a[i] && a[i] <='9') {
				sum1 = sum1 + (a[i] - '0');
			}
			else cout << a[i];
		}
		cout << sum1 << endl;
	}
}
