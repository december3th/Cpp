#include<bits/stdc++.h>
using namespace std;
string  ch(string s ) {
	string s1 = s;
	for (int i = 0 ; i < s1.size() ; i++) s1[i] = tolower(s1[i]);
	return s1;
}
main () {
	ifstream in;
	in.open("VANBAN.in");
	map<string,int> cpu;
	while (!in.eof()) {
		string s; 
		in >> s;
		s = ch(s);
		cpu[s]++;
	}
	for (auto x : cpu) cout << x.first<< endl;
	in.close();
}
