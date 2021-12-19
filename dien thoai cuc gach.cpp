#include<bits/stdc++.h>
using namespace std ;
int tn (int a[] , int n) {
	int c = n - 1 , d= 0;
	while(d <= c) {
		if (a[c] != a[d]) return 0;
		c--;d++;
	}
	return 1;
}
main () {
	int k;
	cin >> k;
	cin.ignore();
	while (k--) {
		char a[100];
		int s[100], dem = 0 ;
		cin >> a;
		for ( int i = 0 ; i  < strlen(a) ; i++) a[i] = tolower(a[i]);
		for ( int i = 0 ; i < strlen(a) ; i++) {
			if (a[i] == 'a' || a[i] == 'b'|| a[i] == 'c') s[dem++] = 2;
			else if (a[i] == 'd' || a[i] == 'e' || a[i] == 'f') s[dem++] = 3;
			else if (a[i] == 'g' || a[i] == 'h'|| a[i] == 'i') s[dem++] = 4;
			else if(a[i] == 'j'|| a[i] == 'k' || a[i] == 'l') s[dem++] = 5;
			else if (a[i] == 'm' || a[i]=='n' || a[i] == 'o') s[dem++] = 6;
			else if (a[i] =='p' || a[i] == 'q' || a[i] == 'r' || a[i] == 's') s[dem++] = 7;
			else if (a[i] == 't' || a[i] == 'u' || a[i] == 'v') s[dem++] = 8;
			else if(a[i] == 'w'|| a[i] == 'x' || a[i] == 'y' || a[i] == 'z') s[dem++] = 9;
		}
		if (tn(s,dem)) cout << "YES" ;
		else cout << "NO";
		cout << endl;	
	}	
}

