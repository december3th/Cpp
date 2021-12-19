#include<iostream>
using namespace std;
main () {
	int k ;
	cin >> k ;
	while (k--) {
		long int n;
		cin>>n;
		long int a[100] , dem = 0 ;
		while ( n != 0) {
			a[dem ++] = n % 10;
			n = n / 10 ;
		}
		int kt  = 0 ;
		if (a[0] == 6 && a[1] == 8) cout <<"1"<<endl;
		else cout <<"0"<<endl;
		
	}
}
