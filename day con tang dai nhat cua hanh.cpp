#include<bits/stdc++.h>
using namespace std;
main () {
	int t ; cin >> t ; while(t--) {
		int n ; cin >> n ;
		double a[n] , b[n];
		for (int i = 0 ; i < n ; i++) cin >> a[i] >> b[i];
		int c[1000] , res = 0;
		for (int i = 0 ; i < n ; i++) {
			c[i] = 1;
			for (int j = 0 ; j < i ; j ++) {
				if (a[i] > a[j] && b[i] < b[j]) c[i] = max (c[i],c[j]+1);
			}
			res = max (res,c[i]);
		}
		cout << res << endl;
	}
}
