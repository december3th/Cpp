#include<bits/stdc++.h>
using namespace std;
long long n , k , s , end1 ,a[2000];
int check() {
	long long sum = 0;
	for ( int i =  1; i <= k ; i ++) {
		sum += a[i];
	}
	if (sum == s) return 1;
	return 0;
}
void sinh(int i ) {
	for (int j = a[i-1] + 1 ; j <= n ; j++) {
		a[i] = j;
		if (i == k ) {
			if (check()) end1 = end1 + 1;
		}
		else sinh(i+1) ;
	}
}

main () {
	while(1) {
		end1 = 0 ;
		cin >> n >> k >> s;
		if ( n == 0 && k == 0 && s == 0 ) break;
		else {
			sinh(1);
			cout << end1 << endl;
		}
	}
}
