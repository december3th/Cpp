#include<bits/stdc++.h>
using namespace std;
int main() {
	int k;
//	cin >> k;
	//getchar();
//	while(k--) {
		long long c[10000];
		int dem1 = 0 ;
		int dem = 0;
		int n,m,z;
		cin >> n ;
		long long a[n][n],b[n][n];
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cin >> a[i][j];
				c[dem1++] = a[i][j];
			}
		}
		sort(c,c+dem1);
		int hang, cot, d, i, j;
		hang=n-1;
		cot=n-1;
		d=0;
		int count=0;
		int x = 0;
		while(d<=n/2) {
			for(i=d; i<=cot; i++) {
				b[d][i] = c[x++];
				count++;
			}
			if(count==n*n) break;
			for(i=d+1; i<=hang; i++) {
				b[i][hang] = c[x++];
				count++;
			}
			if(count==n*n) break;
			for(i=cot-1; i>=d; i--) {
				b[hang][i]= c[x++];
				count++;
			}
			if(count==n*n) break;
			for(i=hang-1; i>d; i--) {
				b[i][d]= c[x++];
				count++;
			}
			if(count==n*n) break;
			hang--;
			cot--;
			d++;
			if(count==n*n) break;
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << b[i][j] << " ";
		    }
		    cout << endl;
	    }
	}
//}

