#include<bits/stdc++.h>
using namespace std;
string bd(string s) {
	string tmp="";
	for (int i = 0 ; i < s.size() ; i++) {
		if ('0' <= s[i] && s[i] <= '9') continue;
		tmp += s[i];
	}
	for (int i = 0 ; i < tmp.size() ; i++) {
		if (tmp[i] == 'A'  || tmp[i] == 'K') tmp[i]  = '0';
		if (tmp[i] == 'B'  || tmp[i] == 'L') tmp[i] = '1';
		if (tmp[i] == 'C'  || tmp[i] == 'M') tmp[i] = '2';
		if (tmp[i] == 'D'  || tmp[i] == 'N') tmp[i] = '3';
		if (tmp[i] == 'E' || tmp[i] == 'O') tmp[i] = '4';
		if (tmp[i] == 'F'  || tmp[i] == 'P') tmp[i] = '5';
		if (tmp[i] == 'G'  || tmp[i] == 'Q') tmp[i] ='6';
		if (tmp[i] == 'H'  || tmp[i] == 'R')  tmp[i] = '7';
		if (tmp[i] == 'I'  || tmp[i] == 'S')  tmp[i] = '8';
		if (tmp[i] == 'J'  || tmp[i] == 'T')  tmp[i] = '9';
	}
	return tmp;
}
main () {
	int t ; cin >> t ; while(t--) {
		string s ,s1 ;
		cin >> s >> s1;
		s1 = bd(s1);
		if (s1 == s) cout << "YES\n";
		else cout << "NO\n";
	}
}
