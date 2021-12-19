#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
int main () {
	tester() {
		int n ; cin >> n ; 
	    int  a[n+2],b[n+5]; b[n] = 1e9;
	    for ( int i = 0 ; i < n ; i++) {
		   cin >> a[i];
		   b[i] = a[i];
	    }
	    sort(b,b+n);
	    for ( int i = 0 ; i < n ; i++) {
	    	int k = upper_bound(b,b+n+1,a[i]) - b;
	    	if (k == n) cout << "_" << " ";
	    	else cout << b[k] << " ";
		}
		cout << endl ;
	}
}
