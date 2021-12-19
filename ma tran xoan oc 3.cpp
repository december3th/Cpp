#include<bits/stdc++.h>
using namespace std;
int main() {
	int k;
	cin >> k;
	getchar();
	while(k--) {
		long long b[10000];
		int dem = 0;
		int n,m,z;
		cin >> n >> m >> z;
		long long a[n][m];
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				cin >> a[i][j];
			}
		}
		int hang, cot, d, i, j;
		hang=n-1;
		cot=m-1;
		d=0;
		int count=0;
		while(d<=n/2) {
			for(i=d; i<=cot; i++) {
				b[dem++] = a[d][i];
				count++;
			}
			if(count==m*n) break;
			for(i=d+1; i<=hang; i++) {
				b[dem++] = a[i][cot];
				count++;
			}
			if(count==m*n) break;
			for(i=cot-1; i>=d; i--) {
				b[dem++] = a[hang][i];
				count++;
			}
			if(count==m*n) break;
			for(i=hang-1; i>d; i--) {
				b[dem++] = a[i][d];
				count++;
			}
			if(count==m*n) break;
			hang--;
			cot--;
			d++;
			if(count==m*n) break;
		}
	//	for (int i = 0 ; i < dem ; i++) cout << b[i] << " ";
	    cout << b[z-1] << " ";
  		cout << endl;
	}
}

