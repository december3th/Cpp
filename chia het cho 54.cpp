#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		string a;
		cin >> a;
		int n = a.length();
		int sum = 0 ;
		for ( int i = 0 ; i < n ; i++) {
			if (a[i] == '1') {
			    int k = n - 1 - i;
				if ( k % 4 == 0) sum += 1;
				else if (k % 4 == 1) sum += 2;
				else if ( k % 4 == 2) sum += 4;
				else if ( k % 4 == 3) sum += 3;
			}
		}
		if (sum % 5 == 0 && sum != 0) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}
