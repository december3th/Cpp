#include<iostream>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		long long n ;
		cin >> n;
		long long a[n];
		long long x =-1e9;
		int kt = 0;
		for (  int i = 0 ; i < n ; i++) cin >> a[i];
		for ( int i = 0 ; i < n ; i++) {
			for ( int j = n -1  ; j >= i + 1 ; j--) {
				if (a[i] > a[j]) continue;
				if (j - i > x){
					x = j - i;
					kt = 1;
					break;
			    }
		    }
			if (kt == 1 ) break;
		}
		cout << x  << endl;
	}
}
