#include<bits/stdc++.h>
using namespace std;
int kt ( long long n ) {
	int dem1  = 0 ;
	int dem2  = 0;
	int a[1000] , dem = 0 ;
	while ( n != 0 ) {
		dem++;
		if ( n % 2 == 1) dem1++;
		else dem2++;
		n = n / 10;
	}
	if (dem1 == dem2 && dem % 2 == 0) return 1;
	return 0;
}
int main () {
	 int a ;
	 cin >> a;
	 kt(a);
	 int dem = 0 ;
	 for ( int i = pow(10,a-1) ; i <= pow(10,a) ; i++) {
		if (kt(i) == 1  ) {
			cout << i << " ";
			dem++;
			if (dem == 10) {
				cout << endl;
				dem = 0;
			}
	    }	    
    }
 }  
