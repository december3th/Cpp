#include<bits/stdc++.h> 
using namespace std;
long long bcnn(long long a, long long b) {
	long long c = __gcd(a,b);
	return a * b / c;
}
main () {
	int k;
	cin >> k;
	while (k--) {
		long long a, b, c , m;
		cin >> a >> b >> c >> m;
		long long  d ;
		long long e = pow(10,m-1);
		long long l = pow(10,m) - 1;
	    int kt1 = 0;
		long long sum = bcnn(a,b);
		long long g = bcnn(sum,c);
		long long x = e  / g;
		long long p ;
		if (x * g == e) p = x;
		else p = x + 1;
		if ( g > l) cout << "-1";
		else cout << g * p;
		cout << endl;
	}
}
