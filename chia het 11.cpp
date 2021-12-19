#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while(k--) {
		string a;
		cin >> a;
		int n = a.length();
		int dem = 0 , dem1 = 0 ;
		for ( int i = 0 ; i < n ; i ++ ){
			dem = dem + pow(2,n- i-1) * (a[i] - 48 );
		}
		cout << dem ;
		cout << endl;
    } 
}
    

