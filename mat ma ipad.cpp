#include<bits/stdc++.h>
using namespace std;
int bd(string s,string s1) {
	string tmp="",tmp1 ="";
	for (int i = 0 ; i < s.size() ; i++) {
		if ('0' <= s[i] && s[i] <= '9') continue;
		tmp += s[i];
		tmp1 += s[i];
	}
	for (int i = 0 ; i < tmp.size() ; i++) {
		if (tmp[i] == 'A'  ) tmp[i]  = '0';
		if (tmp[i] == 'B'  ) tmp[i] = '1';
		if (tmp[i] == 'C'  ) tmp[i] = '2';
		if (tmp[i] == 'D'  ) tmp[i] = '3';
		if (tmp[i] == 'E' ) tmp[i] = '4';
		if (tmp[i] == 'F'  ) tmp[i] = '5';
		if (tmp[i] == 'G'  ) tmp[i] ='6';
		if (tmp[i] == 'H'  )  tmp[i] = '7';
		if (tmp[i] == 'I' )  tmp[i] = '8';
		if (tmp[i] == 'J' )  tmp[i] = '9';
	}
	
	for (int i = 0 ; i < tmp.size() ; i++) {
		if (tmp1[i] == 'K') tmp1[i]  = '0';
		if (tmp1[i] == 'L') tmp1[i] = '1';
		if ( tmp1[i] == 'M') tmp1[i] = '2';
		if  (tmp1[i] == 'N') tmp1[i] = '3';
		if ( tmp1[i] == 'O') tmp1[i] = '4';
		if ( tmp1[i] == 'P') tmp1[i] = '5';
		if (  tmp1[i] == 'Q') tmp1[i] ='6';
		if (  tmp1[i] == 'R')  tmp1[i] = '7';
		if ( tmp1[i] == 'S')  tmp1[i] = '8';
		if ( tmp1[i] == 'T')  tmp1[i] = '9';
	}z
	if (s1 == tmp || s1 == tmp1) return 1;
	return 0;
}
main () {
	int t ; cin >> t ; while(t--) {
		string s ,s1 ;
		cin >> s >> s1;
		for (int i = 0 ; i < s1.size() ; i++) s1[i] = toupper(s1[i]);
		
		if (bd(s1,s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
