#include<bits/stdc++.h> 
using namespace std;
main () {
	char a[100];
	cin >> a;
	for ( int i = 0 ; i < strlen(a) ; i++) a[i]  = tolower(a[i]);
	int n = strlen(a);
	for (int i = 0 ; i < strlen(a) ; i++) {
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i]== 'y') continue;
		cout << "." << a[i];
	}
}
