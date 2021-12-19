#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t;cin.ignore();while(t--)
main () {
	tester () {
		string s , s1 = "",s2 ="";
		cin >> s;
		cout << s << endl;
		set<char> xau ;
		for ( int i = 0 ; i < s.size(); i++) xau.insert(s[i]);
		int dem = 0 ;
		for ( auto ii : xau) s2 += ii;
		cout << s2.size() << endl;
	}
}

