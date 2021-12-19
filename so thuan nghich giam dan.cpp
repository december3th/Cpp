#include<bits/stdc++.h>
using namespace std;
int tn(string &s) {
	if (s.size() == 1 ) return 0;
	for ( int i = 0 ; i < s.size() ; i++) {
		if (s[i] != s[s.size() -  i - 1] ) return 0;
	}
	return 1;
}
bool cmp (string a , string b) {
	if (a.size() == b.size()) return a < b;
	return a.size() < b.size();
}

main () {
	string s , a[100000];
	map < string , int > xau;
	while (cin >> s) {
		if (tn(s)) xau[s]++;
	}
	int n = 0 ;
	for (auto x : xau) a[n++] = x.first;
	sort(a,a+n,cmp);
	for (int i = n - 1; i >= 0 ; i--) cout << a[i] << " " << xau[a[i]] << endl;
}
