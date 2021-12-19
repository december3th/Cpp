#include<iostream>
#include<math.h>
using namespace std;
int  hanh(long int n) {
	if ( n < 2) return 0;
	for ( int i = 2 ; i < sqrt(n) ; i++) {
		if ( n % i == 0 ) return 0;
	}
	return 1;
}
main () {
	int k;
	cin>> k ;
	while(k--)
 {
	  	 
   long	int n;
	cin >> n ; 
	for ( long int i = 0  ; i < sqrt(n) ; i++) {
		int a = i * i;
		if ( hanh(a) == 1) cout << a <<" ";	
	}
	cout << endl;}
}


