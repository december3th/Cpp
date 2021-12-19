#include<bits/stdc++.h>
using namespace std;
main () {
	int n ;
	cin >> n; int a[n+5];
	long long sum = 0;
	for (int i  = 0 ; i < n ; i ++) {
		cin >> a[i];
		if (a[i] > 0 ) sum+=a[i];
	}
	cout << sum * 2 ;
}
