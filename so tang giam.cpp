#include<bits/stdc++.h>
using namespace std;
main () {
	int k;
	cin >> k;
	int a[10]={5,20,38,50,38,20,8,5,0};
	while (k--) {
		int n;
		cin >> n;
		cout << a[n-1];
		cout << endl;
	}
}

