#include<bits/stdc++.h>
using namespace std;
main () {
    int k;
    cin >> k ;
    while (k--) {
    	long long a ,  b ;
    	cin >> a >> b;
    	int c;
    	int kt = 0 ;
    	long long  sum = 0 ;
    	for ( long long i = 1 ; i <= a; i++) {
    		sum = sum + (i % b);
		}
		if (sum == b) cout << "1" ;
		else cout << "0";
		cout << endl;
	}
}


