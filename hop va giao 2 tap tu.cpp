#include<bits/stdc++.h>
using namespace std;
string  ch(string s ) {
	string s1 = s;
	for (int i = 0 ; i < s1.size() ; i++) s1[i] = tolower(s1[i]);
	return s1;
}
main () {
	ifstream in1;
	ifstream in2;
	in1.open("DATA1.in ");
	map<string ,int> cpu;
	string s, s1;
	while(in1 >> s) {	
		cpu[ch(s)]++;
	}
	in1.close();
	in2.open("DATA2.in ");
	while(in2 >> s1) {
		cpu[ch(s1)]++;
	}
	in2.close();
	for (auto x : cpu) cout << x.first << " " ;
	cout << endl;
	for (auto x : cpu) if (x.second > 1 ) cout << x.first << " ";
	
}
