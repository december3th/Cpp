#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore();
	while (k--) {
		int n ;
		cin >> n;
		cin.ignore();
		char s1[100];
	    cin.getline(s1,sizeof(s1));
	    for ( int i = 0 ; i < strlen(s1) ; i++) s1[i] = tolower(s1[i]);
	    char s[100][100]; int dem = 0;
	    char *p = strtok(s1," ");
	    while ( p != NULL) {
		   strcpy(s[dem++],p);
		   p = strtok( NULL , " ");
	    }
	
	    for ( int i = 0 ; i < dem ; i++) 
		   for ( int j = 0 ; j < strlen(s[i]) ; j++) 
		    	if (j == 0) s[i][j] = toupper(s[i][j]);
			
	
	    if(n == 1 ) {
	    	cout << s[dem - 1] << " ";
	    	for ( int i = 0 ; i < dem - 1 ; i++) {
	    		if (i == dem - 2 ) cout << s[i] ;
	    		else cout << s[i] << " ";
			}
		}
		if ( n == 2) {
			for ( int i = 1 ; i < dem ; i++) {
				 cout << s[i] << " ";
			}
			cout << s[0];
		}
		cout << endl;
   }
}
		
    	


