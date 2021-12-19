#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main () {
	tester() {
		string s;
		cin >> s;
		int x = 0 , final = 0 ;
		for( int i = s.size() - 1 ;  i >= 0 ; i--)  {
			if (s[i] == '0') x = x + 1;
			else x = x + 0;
			if (s[i] == '1') {
				if ( x > 1) {
					final = final + 3;
					x = x - 2;
				}
			}
		}
		cout << final << "\n";
	}
}
