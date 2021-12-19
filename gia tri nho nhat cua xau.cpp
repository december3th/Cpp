#include<bits/stdc++.h>
using namespace std;
using ll = long long;
main () {
	int t ; cin >> t ; while(t--) {
		int k ; cin >> k;
		string s ; cin >> s;
		map<char,int > cpu;
		for (auto x : s) {
			cpu[x]++;
		}
		priority_queue<int> pq;
		for (auto x : cpu) {
			pq.push(x.second);
		}
		while(k > 0) {
			int top = pq.top(); pq.pop();
			top--;k--;
			pq.push(max(0,top));
		}
		long long sum = 0;
		while(!pq.empty()) {
			sum +=  1ll * pq.top() * pq.top();
			pq.pop();	
		}
		cout << sum << endl;
	}
}
