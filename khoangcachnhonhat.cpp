#include<iostream>
using namespace std;
main () {
	int k;
	cin >> k;
	while (k--) {
		long int n;
		cin >> n ;
		long int a[n];
		for ( int i = 0 ; i < n ; i++) cin >> a[i];
		for ( int i = 0 ; i < n ; i++)  {
			for ( int  j = 0 ; j  < n ; j++) {
				if ( a[i]  < a[j]) {
					int swap = a[i];
					a[i] = a[j];
					a[j] = swap ;
				}
			}
	    }
	  //  for ( int i = 0 ; i < n ; i++)  cout << a[i] << " " ;
	   int max = a[n-1] - a[n-2];
	    for ( int i = n - 2 ; i >  0 ; i--)
	    	if ( a[i] - a[i-1] < max ) max = a[i] - a[i-1];
	    
		cout << max<<endl;
	}
	
}

