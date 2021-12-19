#include<bits/stdc++.h>
using namespace std;
main () {
	char s1[100];
	cin.getline(s1,sizeof(s1));
	for ( int i = 0 ; i < strlen(s1) ; i++) s1[i] = tolower(s1[i]);
	char s[100][100]; int dem = 0;
	char *p = strtok(s1," ");
	while ( p != NULL) {
		strcpy(s[dem++],p);
		p = strtok( NULL , " ");
	}
	char a[100][100]  ;int dem1 = 0;
	cout << s[dem-1];
	for ( int i = 0 ; i < dem - 1; i++) {
		for ( int j = 0 ; j < strlen(s[i]) ; j++) {
			if (j == 0 ) cout<< s[i][j];
		}
	}
	cout << "@ptit.edu.vn";
}
