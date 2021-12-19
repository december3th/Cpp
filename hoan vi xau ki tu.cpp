#include<bits/stdc++.h>
using namespace std;
main () {
	int t; cin >> t ; while(t--) {
		string s ; cin >> s;
		int a[10000],dem = 0;
		for ( int i = 0 ; i < s.size() ; i++) {
			a[dem++] = int(s[i] - '0' - 17);
		}
		for ( int  i = 0 ; i < dem ; i++) cout << char(a[i] +'0' +17);
		cout << " ";
		while(next_permutation(a,a+dem)) {
			for ( int i = 0 ; i < dem ; i++) cout << char(a[i]+'0'+17);
			cout << " ";
		}
		cout << endl;
	}
}
