#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t;cin.ignore();while(t--)
main () {
	tester () {
		string s , s1 = "",s2 ="",s3;
		cin >> s;
		set<char> xau ;
		for ( int i = 0 ; i < s.size(); i++) xau.insert(s[i]);
		int dem = xau.size() , m ;
		for ( int i = 0 ; i < s.size() ; i++) {
			int b[256] = {0};
			s3 = ""; m = 0 ;
			for ( int j = i ; j < s.size() ; j++) {
				if (b[s[j]] == 0 ) {
					m ++;
					b[s[j]] = 1 ;
				}
				s3 += s[j];
				if ( m == dem) break;
			}
			if ( i == 0 ) s2 = s3 ;
			else if ( s2.size() > s3.size() && m == dem) s2 = s3; 
		}
		cout << s2.size() << endl;
	}
}


