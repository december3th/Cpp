#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu;
	long long mau;
};
void nhap( PhanSo &p) {
  cin >> p.tu >> p.mau;
}
void rutgon( PhanSo &p) {
	long long a = __gcd(p.tu,p.mau);
	p.tu = p.tu / a;
	p.mau = p.mau /a;
}
void in ( PhanSo &p) {
	cout << p.tu <<"/" <<  p.mau;
}
main () {
	struct PhanSo p;
	nhap(p) ;
	rutgon(p);
	in(p);
}
