#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b) {
	return a.second < b.second;
}
void xuly(pair<int,int> a[], int n ) {
	sort(a,a+n,cmp);
	int j = 0,dem = 1;
	for (int i = 1 ; i < n ; i++) {
		if (a[i].first >= a[j].second) {
			dem++;
			j = i;
		}
	}
	cout << dem;
}
main () {
	int t , n ;
	pair <int,int> a[100005];
	cin >> t; while(t--) {
		cin >> n;
		for (int i = 0 ; i < n ; i++) cin >> a[i].first >> a[i].second;
		xuly(a,n);
		cout << endl;
	}
}
// 1 2
// 3 4	 
// 0 6
//5 7
// 5 9
// 8 9 

