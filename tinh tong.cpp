#include<bits/stdc++.h>
using namespace std;
int correct_number(string s ) {
	if (s.size() > 10) return 0;
	for (auto x : s ) {
		if (x < '0' || x > '9') return 0;
	}
	return 1;
}
int number(string s) {
	stringstream ss(s);
	int tmp ;
	ss >> tmp;
	return tmp;
}
main () {
	ifstream in;
	in.open("DATA.in ");
	long long sum = 0;
	while (!in.eof()) {
		string text ;
		in >> text ;
		if (correct_number(text)) sum += number(text);
	}
	cout << sum;
}
