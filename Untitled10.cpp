#include<bits/stdc++.h>
using namespace std;
struct cau {
	string line ,line1;
};
main () {
	int n , cin >> n ;
	cau ds[1000];
	for (int i = 0 ; i < n ; i++) {
		scanf("\n");
		getline(cin,ds[i].line);
	}
	int dem = 0 ;
	for (int i = 0 ; i < n ; i++) {
		int value = 0;
		if (ds[i].line == "Home/accommodation") {
			ds[dem++].line1 = ds[i].line;
			value = i;
			for (int j = value ; j < n ; j++ ) {
				if (ds[j].line == "")
			}
		}
	}
}
