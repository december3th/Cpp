#include<bits/stdc++.h>
using namespace std;
string s ; int n , m , b[100];
vector < string> cpu;
void in() {
	for ( int i = 0 ; i < m ; i++) {
		cout << s[b[i+1] -1 ] ;
	}
	cout << endl;
}
void sinh(int i ) {
	for (int j = b[i-1] + 1 ; j <= n ; j ++) {
		b[i] = j;
		if (i == m) {
			string x;
			for ( int i = 0 ; i < m ; i++) {
				x += (s[b[i+1] -1 ]);
			}
			cpu.push_back(x);	
		}
		else sinh(i+1);
	}
}
bool cmp(string a,string b) {
	return a < b;
}
main () {
	int t ; cin >> t ; while(t--) {
		cpu.clear();
		cin >> n ;
		cin >> s;
		for (int i = 1 ; i <= n ; i++) {
			m = i ;
			sinh(1);
		}
		sort(cpu.begin(),cpu.end(),cmp);
		for (int i = 0 ; i < cpu.size() ; i++) cout << cpu[i] << " ";
		cout << endl;
	}
}
