#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
	int k;
	cin >> k;
	while ( k--) {
		int n ; 
		cin >> n ;
		int a[n];
		for ( int i = 0 ; i < n - 1 ; i++) cin >> a[i];
		int  j = 1 ;
		while ( j <= n) {
			int dem = 0 ; 
			int kt = 0 ;
			for ( int i = 0 ; i < n  - 1 ; i++) {
				if (j == a[i]) j++;
				else dem++;
			}
			if (dem == n - 1) {
				cout << j;
				kt = 1;
				break;				
			}
			if (kt == 1 ) break;
		}
		cout << endl;
	}
} 

