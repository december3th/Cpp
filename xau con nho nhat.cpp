#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t;cin.ignore();while(t--)
main () {
	tester () {
		string s , s1 = "",s2 ="",s3,s4,s5;
		cin >> s >> s4 ;
		set<char> xau;
		int dem1 = 0 ;
		for ( int i = 0 ; i < s.size() ; i++) xau.insert(s[i]);
		for ( auto  i : xau) s5 += i;
		for ( int i = 0 ; i < s5.size() ; i++) {
			for ( int j = 0 ; j < s4.size() ; j++) {
				if (s5[i] == s4[j]) dem1++;
			}
		}
		if (dem1 != s4.size() ) cout << -1;
		else {
		int m ,dem;
		for ( int i = 0 ; i < s.size() ; i++) {
			int b[256] = {0};
			s3 = ""; m = 0 ;
			for ( int j = i ; j < s.size() ; j++) {
				dem = 0 ;
				for ( int z = 0 ; z < s4.size() ;z ++) {
					if ( s[j] == s4[z]) {
						dem = 1;
					}
			    }
				if (dem == 1) {
					if (b[s[j]] == 0 ) {
						m++;
						b[s[j]] = 1;
					}
				}
				s3 += s[j];
				if ( m == s4.size()) break;
			}
			if ( i == 0 ) s2 = s3 ;
			else if ( s2.size() > s3.size() && m == s4.size()) s2 = s3; 
		}
		cout << s2 ; } 
		cout << endl;
	}
}

