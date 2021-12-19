#include<bits/stdc++.h>
using namespace std;
int n , m ,a[1000];
void in(int m) {
	for ( int i = 1 ; i <= m ; i++) {
		cout << a[i] ;
	}
	cout << " ";
}
void bd(int i ) {
	for ( int j = a[i-1] + 1;  j <= n - m + i  ; j ++) {
		a[i] = j;
		if (i == m) in(m);
		else bd(i + 1);
	}
}
main () {
	int k ;
	cin >> k ;
	while (k--) {
		cin >> n >> m ;
		bd(1);
		cout << endl;
	}
}
