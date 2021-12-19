#include<bits/stdc++.h>
using namespace std;
long long tongcs (long long n) {
	int dem = 0 ;
	while ( n > 0) {
		dem = dem + n % 10;
		n = n / 10;
	}
	return dem;
}
int ngto(long long  n){
	if(n<2) return 0 ; 
	else {
		for(long long i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0 ;
		}
		return 1 ;
	}
}
main () {
	int k;
	cin >> k;
	while (k--) {
		long long n;
		cin >> n;
		long long a = n;
		int sum = 0;
		if (ngto(n)) cout << "NO" ;
		else{
	    for ( long long i = 2 ; i < sqrt(n) ;  i++) {
		    while ( n % i == 0 ) {
				long long h = i;
				while (h != 0) {
					sum = sum + h % 10;
					h = h / 10;
				}
				n = n /i;
		   }
    	}
		if (n > 1) {
			while ( n != 0) {
			  sum = sum + n % 10;
	     	   n = n / 10;
		   }
		}
		if (tongcs(a) == sum) cout << "YES";
		else cout << "NO" ;
	    }
	    cout << endl;
	}
}
	

