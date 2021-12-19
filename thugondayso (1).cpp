#include<bits/stdc++.h>
using namespace std;
main () {
	int n ; cin >> n;
	vector <int> a(n);
	for (auto &x : a) cin >> x ;
	int kt ;
	while(1) {
		if (kt == 1 ) break;
		kt = 1 ;
		for (int i = 0 ; i < a.size() - 1 ; i++) {
			if ((a[i] + a[i+1]) % 2 == 0 ) {
				kt = 0;
				a.erase(a.begin() + i ,a.begin() + i + 2);
			}
		}
    }
	cout << a.size() ;
}
