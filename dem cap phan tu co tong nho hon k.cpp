#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		int n , m;
		cin >> n >> m ;
		int a[n];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		sort(a,a+n);
		long long x = 0;
		for ( int i = n - 1 ; i > 0 ; i--) {
			int tmp = upper_bound(a,a+n,a[i]-m) - a;
			if ( a[tmp] + m == a[i]) tmp++;
			tmp = i - tmp;
			if (tmp > 0) x += tmp;
		}	
		cout << x << endl;
	}
}
