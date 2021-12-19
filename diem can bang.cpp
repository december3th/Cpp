#include<iostream>
using namespace std;
main () {
	int k;
	cin >> k;
	while ( k--) {
		long int n ;
		cin >> n;
		long int a[n];
		int sum = 0;
		for ( int i = 0 ; i < n ; i++) {
			cin >> a[i];
			sum += a[i];
	   }
		int sum1 = 0 ;
		int sum2 = 1;
		int kt = 0;
		for ( int i = 0 ; i < sum2 ; i++) {
			if (sum2 > n) break;
			sum1 += a[i];
			if (sum1 == sum - sum1 - a[sum2]) {
				cout << sum2 + 1;
				kt = 1;
				break;
		    }
			if (kt == 1 ) break;
			else sum2++;  
			if (sum2 > n) break;   
		}
		if (kt == 0) cout << "-1";
		cout << endl;
    }
}
