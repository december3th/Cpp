#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a , long long b) {
	return a < 0 ;
}
main () {
	int t ; cin >> t ; while(t--) {
		long long n , m ; cin >> n >> m ;
		long long a[n]; int kt = 0;
		for (int i = 0 ; i < n ; i++) cin >> a[i];
		long long max1 = *max_element(a,a+n);
		stable_sort(a,a+n,cmp);
		long long  k ;
		for (int i = 0 ; i < n ; i++) {
			if (a[i] == max1) {
				k = i ;
				kt = 1 ;
				break;
			}
			if (kt == 1 ) break;
		}
	//	for (int i = 0 ; i < n ; i++) cout << a[i] << " ";
		for (int i = 0 ; i < n  ; i++) {
			if (i == k ) cout << m << " " << a[i];
			else cout << a[i] << " ";
		}
		cout << endl;
	}
}
