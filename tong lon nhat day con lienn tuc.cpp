#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while ( k--) {
		long long  n ;
		cin >> n;
		long long  a[n] ; 
		int dem = 0 ;
		for ( int i = 0 ; i < n ; i++) {
			cin >> a[i];
			if (a[i] < 0) dem++;
		}
		long long sum = *std::max_element (a, a+n);
		if (dem == n) cout << "-1"<< endl;
		else{
		long long sum1 = 0;
		long long x = -1e20;
		for ( int i = 0 ; i < n ; i ++) {
			sum1 += a[i];
			if(sum1 < 0) sum1 = 0 ;
			if (x < sum1)  x = sum1;
			}
			cout << x << endl;
		}
	}
}
