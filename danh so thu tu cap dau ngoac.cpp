#include<bits/stdc++.h>
using namespace std;
void xuly(string s ) {
	stack<int> cpu;
	int d = 0 ;
	for (int i = 0 ; i < s.size() ; i++) {
		if (s[i] == '(') {
			d++;
			cpu.push(d);
			cout << cpu.top() << " ";
		}
		else if (s[i] == ')' ) {
			cout << cpu.top() << " ";
			cpu.pop();
		}
	}
}
main () {
	int t ; cin >> t ; cin.ignore() ;while(t--) {
		string s; getline(cin,s);
		xuly(s) ;
		cout << endl;
	}
}
