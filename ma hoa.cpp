#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore() ;
	while ( k-- ) {
		char a[100];
		cin >> a;
		int i = 0 ;
		int dem ;
		int kt ;
		while ( i <  strlen(a)) {
		    dem = 0 ;
			for ( int j = i + 1 ; j < strlen(a) ; j++) {
				kt = 0 ;
				if (a[i] == a[j]) dem++;
				else if (a[i] != a[j]) {
					kt = 1 ;
					break;
				}
				if (kt == 1 ) break;
			}	
		    cout << a[i] << dem + 1;
			i = i + dem + 1;
		}
		cout << endl;
   }
}

