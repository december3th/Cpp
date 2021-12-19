#include<bits/stdc++.h>
using namespace std;
const long long mod = 10e9 + 7;
long long cpu[1005][1005] ;
void make() {
	for (int i = 0 ; i <= 1000 ; i++) {
		for (int j = 0 ; j <= i ; j++) {
			if (i == j || j == 0) cpu[i][j] = 1;
			else cpu[i][j] = cpu[i-1][j-1] + cpu[i-1][j];
			cpu[i][j] %= mod;
		}
	}
}
main () {
	make();
	int t ; cin >> t; while(t--) {
		long long n , k ;
		cin >> n >> k;
		cout << cpu[n][k] << endl;
	}
}
