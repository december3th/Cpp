#include<bits/stdc++.h>
using namespace std;
main () {
	int t ; cin >> t; while(t--) {
		vector<int> a;
		long long n ; cin >> n;
		while(n!=0) {
			a.push_back(n % 10);
			n = n /10;
		}
		reverse(a.begin(),a.end());
		long long res = 0 ;
		for ( int i =0 ; i < a.size() ; i++) {
			long long sum = 0;
			for ( int j = i ; j < a.size() ; j++) {
				sum = sum * 10 + a[j];
				res += sum;
			}
		}
		cout << res << endl;
	}
	//1 2 3 4 
	// 1 12 + 123 + 1234 + 
}
