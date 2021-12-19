#include<bits/stdc++.h>
using namespace std;
main () {
	int t ; cin >> t; while(t--) {
		long long n , m ;
		cin >> n >> m;
		long long a[n],b[n+1];
		for (int i = 0 ; i < n ; i++) {
			cin >> a[i];
		}
		long long value,kt = 0 ;
		long long x = *max_element(a,a+n);
		for (int i = 0 ; i < n ; i++) {
			if (a[i] == x) {
				kt = 1;
				value = i;
				break;
			}
			if (kt == 1) break;
		}
		
		for (int i = 0 ; i <= n ; i++) {
			if (i < value) b[i] = a[i];
			else if (i == value) b[i] = m;
			else b[i] = a[i-1];
		}
		for (int i = 0; i <= n ; i++) if (b[i] < 0) cout << b[i] << " ";
		for (int i = 0; i <= n ; i++) if (b[i] >= 0) cout << b[i] << " ";
		cout << endl;
	}
}
