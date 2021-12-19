#include<bits/stdc++.h> 
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore();
	while ( k--) {
		char s[500];
		cin.getline(s,sizeof(s));
		char const *delim=" ";
	    char *p;
	    int m;
	    long long c=0, l=0, dem=0;
	    for(p = strtok(s, delim) ; p != NULL ;  p = strtok(NULL, delim)) {
	    	m = atoi(p);
	    	if ( m % 2 == 0) c++;
	    	else l++;
	    	dem ++ ;
		}
		if ( l > c && dem % 2 == 1 || l < c && dem % 2 == 0) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
