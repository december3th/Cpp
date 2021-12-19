#include<iostream>
using namespace std;
int main (){
	int k;
	cin >> k;
	while (k--) {
		int c, d;
		cin >> c >> d;
		int a[c][d];
		int b[10000] , dem = 0;
		for ( int i = 0; i < c; i++){
			for ( int j = 0; j < d; j++){
				cin >> a[i][j];
				b[dem++] = a[i][j];
			}
		}
		
		for ( int i = 0; i < dem ; i++){
			for ( int j = 0; j < dem; j++){
				if ( b[i] < b[j]) {
					int doi = b[i];
					b[i] = b[j];
					b[j] = doi;
				}
			}
		}
		for (int i = 0; i < dem; i++) cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}
