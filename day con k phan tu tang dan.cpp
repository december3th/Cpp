#include<bits/stdc++.h>
using namespace std;
int n , m , a[20] ,b[50];
void in() {
	for ( int i = 1 ; i <= m ; i++) cout << a[b[i]]<< " ";
	cout << endl;
}
void sinh(int i) {
	for ( int j = b[i-1]   ; j < n ; j++ ) {
		b[i] = j;
		if (i == m) in();
		else sinh(i+1);
	}
}
main () {
		cin >> n >> m ;
		for (int i = 0 ; i < n  ; i++)  a[i] = i + 1;
		sort(a,a+n);
		sinh(1);
	}
	// 2 3 4 5
	//2 3 4

//2 3 5

//2 4 5

//3 4 5

