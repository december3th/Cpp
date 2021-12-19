#include <bits/stdc++.h>
using namespace std;
struct mang {
	long long sum ;
	int t;
};
mang ds[1000];
#define tester() int t; cin >> t; while(t--)
main () {
	tester () {
		int n , k; cin >> n >> k;
		int a[n+5]; for ( int i = 0 ; i < n ; i++) cin >> a[i];
		long long x = -1e9;
		for ( int i  = 0 ; i < n - k + 1 ; i ++) {
			ds[i].sum = 0 ;
			ds[i].t = i;
			for ( int j = i ; j < i + k ; j++) {
				ds[i].sum = ds[i].sum + a[j];
			}
			x = max (x,ds[i].sum);
		}
		int index ;
		for ( int i = 0 ; i < n - k + 1 ; i++) {
			if (x == ds[i].sum) index = i;
		}
		for ( int i = index ; i < index + k ;i++ ) cout << a[i] << " ";
		cout << endl;
    }
}
