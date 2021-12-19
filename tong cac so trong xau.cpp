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
			kt = 0 ;
			dem = 0 ;
			sum = 0;
			if ('0' <= a[i] && a[i] <='9') {
				int x  = i ;
				kt = 1 ;
				for ( int j = x + 1 ; j < a.size() ; j++) {
					if ('0' <= a[j] && a[j] <='9') dem++;
					else break;
				}
				dem1 = dem ;
				for ( int l = x ; l <= x + dem ; l++) {
					sum = sum + pow(10,dem1) * (a[l] - '0');
					dem1--;
				}
				sum1 = sum + sum1;
				i = x + dem + 1;
			}
		}
		cout << sum1 << endl;
	}
}
