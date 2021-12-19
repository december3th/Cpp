#include<bits/stdc++.h>
using namespace std;
int n , a[100];
void in(int m ) {
	cout << "(";
	for ( int i = 1 ; i <= m ; i++) {
		if ( i == m) cout << a[i] << ")";
		else cout << a[i] << " ";
    }
    cout << " ";
}
void sinh(int i , int j , int sum) {
	for  (int k = j ; k >= 1; k--) {
		if (k + sum <= n) {
			a[i] = k;
			sum = sum + k ;
			if (sum  == n )in(i);
			else sinh(i+1,k,sum);
			sum = sum - k;
		}
	}
}
main () {
	int t ; cin >> t ; while(t--) {
		cin >> n;
		sinh(1,n,0);
		cout << endl;
	}
}
