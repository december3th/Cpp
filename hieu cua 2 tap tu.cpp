#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore() ;
	while (k--) {
		char a[250],b[250],c[250][250],d[250][250];
		cin.getline(a,sizeof(a));
		cin.getline(b,sizeof(b));
		int dem = 0 , dem1 = 0 ;
		char *p = strtok(a," ") ;
		while ( p != NULL ) {
			strcpy(c[dem++],p);
			p = strtok(NULL , " ");
		}
		char *p1 = strtok (b," ");
		while ( p1 != NULL ) {
			strcpy(d[dem1++],p1);
			p1 = strtok(NULL," ");
		}
		for ( int i = 0 ;  i < dem ; i++) {
			for ( int j = 0 ; j < dem; j++) {
				if (strcmp(c[i],c[j]) < 0) swap(c[i],c[j]);
			}
		}
		char e[250][250] ;
		int kt ,kt1 ,dem2 = 0;
		for ( int i = 0 ; i < dem ; i++) {
			kt = 0;
			for ( int j = 0 ; j < dem1 ; j++) {
				if (strcmp(c[i],d[j]) == 0 ) kt = 1;
			}
			if (kt == 0) {
				strcpy(e[dem2++],c[i]);
			}		
    	}
    	for ( int i = 0 ; i < dem2 ; i++) {
    		kt1 = 0;
    		for ( int j = 0 ; j < i ; j++) {
    			if (strcmp(e[i],e[j]) == 0) kt1 = 1;
			}
			if (kt1 == 0) cout << e[i] << " ";
		}
		cout << endl;
	}
}

