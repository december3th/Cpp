#include<bits/stdc++.h>
using namespace std;
main () {
	ifstream in;
	ofstream out;
	in.open("PTIT.in");
	out.open("PTIT.out");
	while(!in.eof()) {
		string s ; in >> s;
		out << s << endl;
	}
	out.close();
	in.close();
}
