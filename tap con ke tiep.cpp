#include<bits/stdc++.h>
int n , k , a[100000],ok;
using namespace std;
void ktao() {
	for ( int i = 1 ; i <= k ; i++) a[i] = i;
}
void next() {
	int i = k ;
	while ( i >= 1 && a[i] == n-k+i) {
		--i;
	}
	if (i == 0 ) {
		for ( int i = 1 ; i <= k; i++) cout << i << " ";
	}
	else {
		a[i]++;
		for ( int j = i + 1 ; j <= k ; j++) {
			a[j] = a[i] + j - i;
		}
		for ( int i = 1 ; i <=k ; i++) cout << a[i] << " ";
	}
}
main () {
	int t ; cin >> t ; while(t--) {
		cin >> n >> k;
		for ( int i = 1 ; i <= k ; i++) cin >> a[i];
		next();
		cout << "\n";
	}
}
