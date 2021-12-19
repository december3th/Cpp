#include<iostream>
using namespace std;
int main () {
      long long n ;
      int k ;
      cin >> n >> k ;
      int dem  = 0 ; 
      int kt = 0 ;
      int a;
      for ( int i = 2 ; i <= n / 2   ; i ++ ) {
      	if ( n % i == 0) {
      		dem++;
      		n = n / i ;
		  }	
		  if (  dem == k ) {
		  	a = i ;
		  	kt = 1;
		  }
		  if ( kt == 1) break;
	  }
	  if ( kt == 1 ) cout << a ;
	  else cout << "-1";
	  cout << " "<< k ;
}
