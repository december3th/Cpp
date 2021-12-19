#include<iostream>
#include<math.h>
using namespace std;
int  hanh(long int n) {
	if ( n < 2) return 0;
	for ( int i = 2 ; i <= sqrt(n) ; i++) {
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
	int dem = 0 ;
	for ( long int i = 0  ; i <= sqrt(n) ; i++) {
		if (hanh(i) == 1 ) dem++;
	}
	cout << dem;
	cout << endl;}
}
