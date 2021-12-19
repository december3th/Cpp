#include<bits/stdc++.h>
using namespace std;
long long tong(string s) {
	long long sum = 0 ;
	for (int i = 0 ; i < s.size();i++) {
		sum += s[i] - 48;
	}
	return sum;
}
main () {
	int t ; cin >> t ; while(t--) {
		int n ; cin >> n;
		string s ; cin >> s;
		long long sum = 0 ;
		for (int i = 1 ; i <= s.size() ; i++) {
			for (int j = 0 ; j <= s.size() - i ; j++ ) {
				long long x = tong(s.substr(j,i));
				string z = s.substr(j,i);
				if (x % 3 == 0 ) {
					cout << z << " " ;
					sum++;
				}
			}
		}
		cout << endl;
		cout << sum << "\n";
	}
}
