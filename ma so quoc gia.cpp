#include<bits/stdc++.h>
using namespace std ;
main () {
	int k;
	cin >> k;
	while(k--){
		char a[20];
		cin >> a;
		int b , c ,d ;
		for ( int i = 0 ; i < strlen(a) ; i ++) {
			if (a[i] == '0' && a[i+1] =='8' && a[i+2]=='4') {
				b = i ;
		    }
	    }
	   for ( int j = 0 ; j < b ; j ++) cout << a[j];
	   for ( int d = b + 3 ;d < strlen(a) ; d++) cout << a[d];
		cout << endl;
    }
}
		
		



