#include<bits/stdc++.h>
using namespace std;
int ngto(long long  n){
	if(n<2) return 0 ; 
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0 ;
		}
		return 1 ;
	}
}
int ngto1(long long n) {
	int kt = 0 ;
	for ( int i = 3; i <= n ;i++) {
		if ( n % i == 0) {
			return i ;
			kt = 1;
			break;
		}
		if ( kt == 1) break;
   }
}
int bd(long long &n) {
	if (ngto(n) == 1 ) return n;
	else if (n == 1 ) return 1;
	else if ( n % 2 == 0) return 2;
	else return ngto1(n);
}
main () {
	int k;
	cin >> k ;
	while ( k -- ) {
		long long n;
		cin >> n;
		for ( long long i = 1 ; i <= n ; i ++) cout << bd(i) << " ";
		cout << endl;
	}
}

