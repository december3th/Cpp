#include<bits/stdc++.h>
using namespace std;
main () {
	char a[100];
	char b[100];
	cin.getline(a,sizeof(a));
	cin.getline(b,sizeof(b));
	char s[100][100];
	int dem = 0 ;
	char *p = strtok(a," ");
	while ( p != NULL) {
		strcpy(s[dem++],p);
		p = strtok (NULL," ");
	}
	for ( int i = 0 ; i < dem ; i++) {
		if ( strcmp(s[i],b) == 0) continue;
		cout << s[i] << " ";
	}
}

