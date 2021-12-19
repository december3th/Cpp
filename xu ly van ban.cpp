#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main () {
	string tu ;
	int kt = 1 ;
	while ( cin >> tu ) {
		int n = tu.size();
		for ( int i = 0 ; i < n ; i++) tu[i] = tolower(tu[i]);
		if (kt == 1) {
			tu[0] = toupper(tu[0]) ;
			kt = 0 ;
		}
		if (tu[n-1] == '.' || tu[n-1] == '!'|| tu[n-1] == '?') {
			tu.erase(tu.end()-1);
			cout << tu << endl;
			kt = 1;
		}
		else cout << tu << " ";   
	}
}

