#include<bits/stdc++.h>
using namespace std;
main () {
	int t; cin >> t ; while(t--) {
		int n  ; cin >> n; int a[n];
		int dem = 0 ; map < int , int > cpu;
		for (int i = 0  ; i < n ; i++) {
			cin >> a[i];
			cpu[a[i]]++;
		}
		sort(a,a+n);
		for ( int i = a[0] ; i <= a[n-1] ; i++) {
			if (cpu[i] == 0) dem++;
		} 
		cout << dem << endl;
	}
}
