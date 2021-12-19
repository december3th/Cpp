#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		long long a[2000];
		long long n , x ;
		cin >> n >> x ;
		for (int i = 0 ; i < n ; i++) cin >> a[i];
		long long sum ;
		long long max  = 0 ;
		for (int i = 0 ; i < n ; i++) {
			sum = 1 ;
			for ( int j = 1 ; j <= n - 1 - i ; j ++) {
				sum = (sum * x ) % 1000000007 ;
			}
			max = sum * a[i] + max ;
			if (max > 1000000007 ) max = max  % 1000000007 ;
		}
		cout << max << endl;
	}
}
