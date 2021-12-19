#include<bits/stdc++.h>
using namespace std;
main () {
		int n;
		cin >> n;
	    int a[n][3];
	    int dem = 0 ,dem1,dem2;
	    for ( int i = 0 ; i < n ; i ++) {
	    	dem1 = 0 , dem2 = 0;
	    	for ( int j = 0 ; j < 3 ; j ++) {
	    		cin >> a[i][j];
	    		if (a[i][j] == 1) dem1++;
	    		else dem2++;
			}
			if (dem1 > dem2) dem++;
		}
		cout << dem;
		cout << endl;
	}

