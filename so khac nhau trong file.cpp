#include<bits/stdc++.h>
using namespace std;
struct num {
	int so;
	int count;
};
bool cmp(num a , num b) {
	return a.so < b.so;
}
main () {
	ifstream in;
	in.open("DATA.in");
	num a[100000];
	int k = 0 ;
	while (in.eof()) {
		int n , kt = 0;
		in >> n ;
		if (in.eof()) break;
		for (int i = 0 ; i < k ; i++ ) {
			if (a[i].so == n) {
				a[i].count++;
				kt = 1 ;
				break;
			}
		}
		if (kt == 0) {
			a[k].so = n;
			a[k].count = 1 ;
			k++;
		}
	}
	sort(a,a+k,cmp);
	for (int i = 0 ; i < k ; i++) cout << a[i].so << " " << a[i].count  << endl;
	in.close;
	
}
