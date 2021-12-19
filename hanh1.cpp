#include<bits/stdc++.h>
using namespace std;
main () {
	char *a;
	char b[100];
	a = new char[100];
	fgets(a,100,stdin);
	char s[100][100];
	int dem = 0 ;
	char *p = strtok(a," ");
	while ( p != NULL) {
		strcpy(s[dem++],p);
		p = strtok (NULL," ");
	}
	cout << dem ;
	
}

