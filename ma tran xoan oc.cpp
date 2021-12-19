#include<iostream>
using namespace std;
int main() {
	int k;
	cin >> k;
	getchar();
	while(k--) {
		int n,m;
		cin >> n >> m;
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
				cout << a[d][i] << " ";
				count++;
			}
			if(count==m*n) break;
			for(i=d+1; i<=hang; i++) {
				cout << a[i][cot] << " ";
				count++;
			}
			if(count==m*n) break;
			for(i=cot-1; i>=d; i--) {
				cout << a[hang][i] << " ";
				count++;
			}
			if(count==m*n) break;
			for(i=hang-1; i>d; i--) {
				cout << a[i][d] << " ";
				count++;
			}
			if(count==m*n) break;
			hang--;
			cot--;
			d++;
			if(count==m*n) break;
		}
		cout << endl;
	}
}

