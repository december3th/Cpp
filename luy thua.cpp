#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7 ;
main () {
	int t ; cin >> t ; while(t--) {
		long int n , k;
		cin >> n >> k;
		long long tmp = pow(10,9)+7;
		long long sum = 1;
		for ( int i = 1 ;i <= k ; i++) {
			sum = ((sum % tmp)  * (n % tmp)) % tmp;
		}
		cout << sum; 
		cout << endl;
	}
}
