#include<bits/stdc++.h>;
using namespace std;
void xoa(char b[],int n,int p) {
	for(int i=p ; i<n ; i++){
		b[i] = b[i+1];
	}
	n--;
}
main () {
	int k ;
	cin >> k;
	cin.ignore();
	while (k--) {
		char a[27]="abcdefghijklmnopqrstuvwxyz";
		string s;
		int z;
		cin >> s;
		cin >> z;
		int n = s.size();
		int dem = 0;
		int m = 26;
		for ( int i = 0 ; i < n ; i++) {
			for ( int j  = 0 ; j < m ; j ++ ) {
				if (s[i] == a[j]) {
					dem++;
					xoa(a,m,j);
				}
			}
		}
		int x = 26 - dem ;
		if ( x  > z) cout << "0";
		else if ( x <= z) cout << "1";
		cout << endl;
	}
}
