#include<bits/stdc++.h>
using namespace std;
struct infor {
	int ma ;
	string name;
	string Kind ;
	double buy , sell;
	double lai ;
};
struct infor ds[1000];
main () {
	int n ;
	cin >> n ;
	for (int i = 0 ; i < n ; i++) {
		cin.ignore();
		ds[i].ma = i + 1 ;
		getline(cin,ds[i].name);
		getline(cin,ds[i].Kind);
		cin >> ds[i].buy >> ds[i].sell;
		ds[i].lai = ds[i].sell - ds[i].buy;
	}
	for ( int i = 1 ; i < n ; i++) {
		for (int j = 1 ; j < n ; j++) {
			if (ds[j-1].lai < ds[j].lai) {
				struct infor x = ds[j-1];
				ds[j-1] = ds[j];
				ds[j] = x;
			}
		}
	}
	for ( int i = 0 ; i < n ; i++) cout << ds[i].ma << " " << ds[i].name << " " << ds[i].Kind << " "  << fixed << setprecision(2) << ds[i].lai << endl;
}
