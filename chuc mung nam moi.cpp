#include<bits/stdc++.h> 
using namespace std;
struct xau {
	char cau[100];
};

main () {
	int n ;
	cin >> n;
	cin.ignore();
	struct xau ds[n];
	for ( int i = 0 ; i < n ; i++) {
		cin.getline(ds[i].cau,sizeof(ds[i].cau));
	}
	int dem = 0;
	for ( int i = 0 ; i < n ; i++) {
		int kt = 0;
		for ( int j = 0 ; j < i ; j++) {
			if (strcmp(ds[i].cau,ds[j].cau) == 0) kt = 1;
		}
		if (kt == 0) dem++;
	}
	cout << dem;
}
