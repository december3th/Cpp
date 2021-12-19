#include<bits/stdc++.h>
using namespace std;
using ll = long long;
main () {
	int t ; cin >> t ; while(t--) {
		int k ; cin >> k;
		int a[k]; for (auto &x : a) cin >> x;
		priority_queue<int , vector <int> , greater<int>> pq;
		for (auto x : a) pq.push(x);
		long long res = 0;
		while(pq.size() > 1 ) {
			long long top = pq.top(); pq.pop();
			long long  top1 = pq.top(); pq.pop();
			res += top + top1;
			pq.push(top + top1);
		}
		cout << res << endl;
	}
}
