#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main () {
	int k;
	cin >> k;
	while ( k--) {
		long int n ,l;
		cin >> n ;
		long int a[n];
		for ( int i = 0 ; i < n  ; i++) cin >> a[i];
		long int b[n], dem = 0;
		for ( int i = 0 ;  i < n ; i++) {
			int kt = 0;
			for ( int j = 0 ; j < i ; j++) {
				if ( (a[i]) == (a[j])) kt = 1;
			}
			if ( kt == 0 ) b[dem++] = a[i];
		}
		//for ( int i = 0 ; i < dem ; i++)  cout << b[i];
		for ( int i = 0 ; i < dem ; i++) {
			for ( int j = 0 ; j < dem ; j++) {
				if (abs(b[i]) > abs(b[j])) {
					int swap = b[i];
					b[i]= b[j];
					b[j] = swap;
				}
			}
		}
	    cout << b[dem-1] + b[dem-2];
		cout << endl;
	}
}
