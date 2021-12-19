#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
	int k;
	cin >> k;
	while ( k--) {
		char a[20] ="ABBADCCABDCCABD";
		char b[20] ="ACCABCDDBBCDDBB";
		int n ;char c[20];
		cin>>n;
		for ( int i = 0 ; i < 15 ; i++) cin >> c[i];
		if ( n == 1011) {
			int dem = 0;
			for ( int i = 0 ; i < 15 ; i++) {
				if (a[i] == c[i]) dem ++;
			}
		//	cout<<dem<<endl;
			float d = (dem * 2) / 3.00;
			cout <<setprecision(2)<<fixed<<d;
		}
		else {
			int dem1 = 0 ;
			for ( int i = 0 ; i < 15 ; i++) {
				if (b[i] == c[i]) dem1 ++;
			}
			float e = (dem1 * 2) / 3.00;
		//	cout << dem1 <<endl;
			cout <<setprecision(2)<<fixed<<e;
		}
		cout << endl;
	}
}
