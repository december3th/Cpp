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
    	for ( long long i = 0 ; i <= b ; i++) {
    		if ((i * a) % b == 1 ) {
    			cout << i << endl;
    			kt = 1 ;
    			break;
			} 
			if ( kt == 1 ) break;
		}
		if ( kt == 1) continue;
		else cout << "-1" << endl;
	}
}
