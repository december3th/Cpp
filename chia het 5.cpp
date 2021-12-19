#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	while(k--) {
		string a;
		cin >> a;
		int n = a.length();
		long long  dem = 0 , dem1 = 0 ;
		for ( int i = 0 ; i < n ; i ++ ){
			dem = dem + pow(2,n- i - 1) * (a[i] - '0' );
		}
		if (dem % 5 == 0) cout << "YES";
		else cout << "NO";
		cout << endl;
    } 
}
    
// 10(1) 10(2) 10(3)
// 2 * 3;  2 * 2 ; 2 * 1
// 10 10 10 10 
// 10  3  6
// 10 4     12 
// 10 10 10 10 10
