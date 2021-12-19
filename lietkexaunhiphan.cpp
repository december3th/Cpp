#include<bits/stdc++.h>
using namespace std;
int n, a[20];
void in() {
	for ( int i = 1 ; i <= n ; i++) {
		cout << a[i] ;
	}
	cout << " ";
}
void bd(int i) {
	for ( int j = 0 ; j <= 1 ; j++) {
		a[i] = j;
		if (i == n) in();
		else bd(i+1);
	}
}
main ()	 {
	int k;
	cin >> k;
	while (k--) {
		cin >> n;
		bd(1);
		cout << endl;
	}
}
