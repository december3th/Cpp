#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore();
	while(k--) {
	  char a[1000];
	  cin.getline(a,sizeof(a));
	  char s[100][100];
	  int dem = 0 ;
 	  char *p = strtok(a,"" " '\t''\n'");
	  while ( p != NULL) {
		  strcpy(s[dem++],p);
		  p = strtok (NULL,"" " '\t''\n'");
	  }
 	  cout << dem ;	
 	  cout << endl;
   }
}
