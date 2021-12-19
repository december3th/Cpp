#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	cin.ignore();
	while(k--) {
	  char a[1000];
	  cin >> a;
	  int n = strlen(a);
	  for ( int i = 0 ; i < n ; i++) {
	  	int kt = 0;
	  	int count = 1;
	  	for ( int j = 0 ; j < n ; j++) {
	  		if (i == j) continue;
	  		if (a[i] == a[j] && i > j) kt = 1;
	  		if (a[i] == a[j]) count++;
	    }
	    if (kt == 0 && count == 1) cout << a[i] ;
	  }
	  cout << endl;
   }
} 

