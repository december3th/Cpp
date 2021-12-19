#include<bits/stdc++.h>
int kt(int a[] , int n) {
	int b = 0;
	for ( int i = 0 ; i < n - 1 ; i++) {
		if (a[i+1] > a[i]) b++;
	}
	if (b == 4) return 1;
	return 0;
}
int kt1(int a[] , int n) {
	int b = 0;
	for ( int i = 0 ; i < n - 1 ; i++) 
		if (a[i+1] == a[i]) b++;
		if (b == 4) return 1;
	return 0;	
}
int kt2(int a[] , int n) {
	int b = 0;
	if ( a[0] == a[1] && a[1] == a[2]) b++;
	if (a[3] == a[4] ) b++;
	if (b == 2) return 1;
	return 0;
}
int kt3(int a[] , int n) {
	int b = 0;
	for ( int i = 0 ; i < n  ; i++ ) {
		if ( a[i] == 6 || a[i] == 8) b++;
	}
	if ( b == 5 ) return 1;
	return 0 ;
}
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore();
	while (k--) {
		char s[1000];
		cin.getline(s,sizeof(s));
		int a[1000],dem=0;
		for ( int i = 0 ; i < strlen(s);i++) {
			if (i == 5 || i == 6 || i == 7 || i == 9 || i == 10) a[dem++] = s[i]-'0';
		}
		if (kt(a,dem) == 1 || kt1(a,dem) == 1 || kt2(a,dem) == 1 || kt3(a,dem) == 1) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
