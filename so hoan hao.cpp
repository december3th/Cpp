#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main () {
	tester() {
		long long a[10] = {6,28,496,8128,33550336,8589869056,137438691328,};
		long long n ; cin >> n ;
		int kt = 0 ;
		for ( int i = 0 ; i <= 6 ; i++) {
			if (n == a[i]) {
				kt = 1 ;
			}
		}
		if (kt == 1 ) cout << 1;
		else cout << 0;
		cout << endl;
	}
}
