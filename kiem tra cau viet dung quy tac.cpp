#include<bits/stdc++.h>
using namespace std;
int kt(string s ) {
	int dem = 0 ;
	stack<char> cpu;
	for (int i = 0 ; i < s.size() - 1; i++) {
		if (s[i] != '[' && s[i] != '(' && s[i] != ']' && s[i] != ')') continue;
		if (s[i] == '[' || s[i] == '(') {
			cpu.push(s[i]);
			dem++;
		}
		else {
			if (cpu.empty()) return 0;
			char in = cpu.top() , out = s[i];
			if (in == '[' && out == ']') cpu.pop();
			else if (in == '(' && out == ')') cpu.pop();
			else return 0;
		}
    }
    return cpu.empty();
}
main () {
	int t ; cin >> t ; cin.ignore() ; while(t--) {
		string s;
		getline(cin,s);
		if (kt(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
