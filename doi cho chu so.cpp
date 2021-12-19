#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t;cin.ignore();while(t--)
main () {
	tester () {
		string a ;
		cin >> a;
		int n = a.size() , ok = 0 , k;
		for ( int i = n - 2 ; i >= 0 ;i--) {
			if (a[i] > a[i+1]) {
				int s = 0 ;
				ok = 1;
				for ( int j = i + 1 ; j < n ; j++) {
					if (a[j] < a[i]) {
						if ( a[j] > s) {
							s = a[j];
						    k = j;
						}	
					}
				}
				swap (a[i] ,a[k]);
				break;
			}
		}
		if ( ok == 0) cout << -1;
		else cout << a;
		cout << endl;
	}
}



