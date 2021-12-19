#include<bits/stdc++.h> 
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore();
	while ( k--) {
		char a[100];
		cin >> a;
		int dem = 0 ;
		int n = strlen(a);
		for (int i = 0 ; i < n ; i++) {
			for ( int j = i + 1 ; j < n  ; j++) {
				if (a[i] == a[j] ) dem++;
			}
		}
		cout << dem + n;
		cout << endl;
	}
}
