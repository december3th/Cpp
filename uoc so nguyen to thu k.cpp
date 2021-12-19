#include<iostream>
using namespace std;
main () {
	int c;
	cin >> c;
	for ( int j = 0 ; j < c ; j++) {
	int k ;
	long long  n ;
	cin>>n>>k;
		int i = 2 ;
		int dem = 0 ;
		int a = -1;
		int kt = 0 ;
		while ( n != 1 ) {
			if ( kt == 1) break;
			while ( n % i == 0 ) {
				dem ++;
		//		printf("%d ", i);
				n = n / i ;
				if ( dem == k) {
				a = i ;
				kt = 1 ;
				break;
			}
			
	   }
			i++;	
			}
	
		cout << a;
		cout << endl;
		}
	}



