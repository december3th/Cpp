#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main () {
	tester () {
		int n , k ; cin >> n >> k;
		int dem1 = 0 , dem2 = 0 ;
		int a[n];
		for ( int i = 0 ; i < n ; i++) {
			cin >> a[i];
			if (a[i] <= k ) dem1++;
	    }
	    for ( int i = 0 ; i < dem1 ; i++) if (a[i] > k) dem2++;
	    int ss = dem2;
	    for ( int i = 0 , j = dem1 ; j < n ; i++,j++) {
	    	if (a[i] > k) dem2--;
	    	if (a[j] > k  ) dem2++;
	    	ss = min (ss,dem2);
		}
		cout << ss << endl;
	}
}
