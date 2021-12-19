#include<bits/stdc++.h>
using namespace std;
int n , b , a[100],c[100],x[100],xopt[100] ;
float fopt = 0;
void nhap() {
	cin >> n;
	cin >> b;
	for ( int i = 1 ; i <= n ; i++) cin >> a[i];
	for (int i = 1 ; i <= n ; i++) cin >> c[i];
}
bool kiemtra() {
	int sum = 0 ;
	for ( int i = 1 ; i <= n  ; i++) {
		sum += a[i] * x[i];
	}
	return sum <= b;
}
int tinhgiatrisudung() {
	int sum = 0;
	for ( int i = 1 ; i <= n ; i++) {
		sum += c[i] * x[i];
	}
	return sum;
}
void uplate (int sum) {
	if (fopt < sum) {
		fopt = sum;
		for ( int i = 1 ; i <= n ; i++) xopt[i] = x[i];
	}
}
void inti(int i) {
	for ( int j  = 0 ; j <=1 ; j++) {
		x[i] = j ;
		if ( i ==  n) {
			if (kiemtra()) {
				int value = tinhgiatrisudung();
				uplate(value);
			}
		}
		else inti(i+1);
	}
}
void hienthi() {
	printf("%0.1f",fopt);
	cout << endl;
	for ( int i = 1 ; i <= n ; i++) cout << xopt[i] << " ";	
}
main () {
	nhap();
	inti (1);
	hienthi();
}
