#include<bits/stdc++.h>
using namespace std;

main () {
int k;
cin >> k;
for ( int j = 0 ; j < k ; j++) {
    fflush(stdin); 	
    char a[1000];
	cin.getline(a,1000);
    char s[100][100];
	int dem = 0 ;
	char *p = strtok(a," ");
	while ( p != NULL) {
		strcpy(s[dem++],p);
		p = strtok (NULL," ");
	}
//	cout << dem ;
	cout << dem;
    cout << endl;
    
   }
}       

