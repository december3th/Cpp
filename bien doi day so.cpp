#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main() {
	tester() {
		int n ;
		cin >> n;
		int a[n];
		for ( int i = 0  ; i < n ; i++) cin >> a[i];
		int b = 0 , c = n - 1, count = 0 ;
		while ( b <= c) {
			if (a[b] == a[c]) {
				b++,c--;
			}
			else if (a[b] < a[c]) {
				b++;
				count ++;
				a[b] += a[b-1];
			}
			else if (a[b] > a[c]) {
				c--;
				count++;
				a[c] += a[c+1];
			}
		}
		cout << count << endl;
	}
}
