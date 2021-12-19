#include<bits/stdc++.h> 
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		long long a, b, c;
		cin >> a >> b >> c;
		long long sum = __gcd(b,c);
		for ( long long i = 0 ; i < sum ; i++) cout << a;
		cout << endl;
	}
}

