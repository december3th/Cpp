#include<bits/stdc++.h>
using namespace std;
main () {
	int n , m;
	cin >> n >> m;
	int a[n];
	map<int ,int > s;
	set<int>s1;
	for ( int i = 0 ; i < n ; i++) {
		cin >> a[i];
		s[a[i]]++ ;
	}
	int dem = 0 , kt ;
	int a1[1000],b[1000],dem1,dem2 = 0;
	for (auto x : s) {
		a1[dem1++] = x.first;
		b[dem2++] = x.second;
		s1.insert (x.second);
	}
	for (int i = 0 ; i < n ; i++) {
		if (s[a[i]] == s[a[i+1]]) dem++;
	}
	if (dem == n - 1  ) cout << "NONE";
	else {
		int d ,c,dem3 = 0; 
		for (auto x : s1) {
			dem3++;
			if (dem3 == s1.size() - 1 ) {
			    d = x;
				break;
			}
		}
		int kt1 = 0;
		for (int i = 0 ; i < dem2 ; i++) {
			if (b[i] == d) {
				c = i;
				kt1 = 1;
			}
			if (kt1 ==1 )  break;
		}
		
		cout << a1[c];
    }
}

