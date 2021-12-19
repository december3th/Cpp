#include<bits/stdc++.h>
using namespace std;
string s;
int xuly(int n) {
	int dem = 0 ;
	for ( int i = 0 ; i < s.size() ; i++) {
		int x = 0 ;
		for ( int j = i ; j < s.size();j++) {
			x = x * 10 + s[j] - '0';
			x = x % n;
			if (x == 0) dem++;
		}
	}
	return dem;
}
main () {
	int k;
	cin >> k;
	while (k--) {
		cin >> s;
		cout << xuly(8) - xuly(24) << endl;
	}
}
