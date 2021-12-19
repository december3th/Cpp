#include<bits/stdc++.h>
using namespace std;
struct mang {
	long long val;
	int count;
	long long sum;
	long long sum1;
};
main () {
	int k;
	cin >> k;
	while ( k--) {
		long long  n ,m;
		cin >> n >> m ;
		mang a[n];
		long long res =1e9;
		long long sum = 0 ,sum1 = 0;
        int  max3;
		long long max1 = -1e9 ,max2 = 1e9;
		for ( int i = 0 ; i < n ; i++) {
			cin >> a[i].val;
			sum += a[i].val;
			long long x = a[i].val;
			max1 = max(max1,a[i].val);
			a[i].sum1 = abs(m-a[i].val);
			max2 = min(a[i].sum1,max2);
		}	
		if (sum < m ) cout << "-1";
 		else if (max1 > m) cout <<  "1" ;
 		else {
			for ( int i = 0 ; i < n ; i++) {
				if (abs(a[i].val - m) == max2) max3 = i;
		    }
		    for ( int i = 0 ; i <= max3 ; i++) {
				a[i].sum = a[i].val; ;
				a[i].count  = 1;
				int kt = 0 ;
				for ( int j = i + 1 ; j < n ; j++) {
					a[i].sum += a[j].val;
					a[i].count++;
					if (a[i].sum > m  ) { 
						kt = 1 ;
						break;
					}
					if (kt == 1) break;
			    }	
			    if (kt == 1) res = min(res,a[i].sum)	;
			}
			for ( int i = 0 ; i < n ; i++) {
				if (a[i].sum == res) {
					cout << a[i].count ;
					break;
				}
		    }
	   }
		cout << endl;
	}
}

