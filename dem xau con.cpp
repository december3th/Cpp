#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main () {
	ios_base::sync_with_stdio(0);cin.tie(0);
	tester() {
		string s ; int k ;
		cin >> s >> k;
		int sum = 0 ;
		set <char> xau;
		for ( int i = 0 ; i < s.size() ; i++) {
			xau.clear();
			for ( int j = i ; j < s.size() ; j++) {
				xau.insert(s[j]);
				if (xau.size() == k) sum++;
		    	else if (xau.size() > k ) break;
			}
		}
		cout << sum << endl;
	}
}
