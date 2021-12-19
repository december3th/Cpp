#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main () {
	int t = 1;
	while(t--) {
		int n ; long long val;
		priority_queue<long long , vector< long long > , greater 	< long long> > a;
		cin >> n;
		for (int i = 0 ; i < n ; i++) {
			cin >> val;
			a.push(val);
		}
		long long res = 0;
		while (a.size() > 1) {
			long long x = a.top();a.pop();
			long long y = a.top();a.pop();
			long long tmp =(x+y	) % mod ;
			a.push(tmp);
			res+= tmp;
			res %= mod;
		}
		cout << res << endl;
	}
}
