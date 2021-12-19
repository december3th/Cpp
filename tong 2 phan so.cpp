#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu;
	long long mau;
};
void nhap( PhanSo &p) {
  cin >> p.tu >> p.mau;
}
void rutgon(struct PhanSo &p) {
	long long a = __gcd(p.tu,p.mau);
	p.tu = p.tu / a;
	p.mau = p.mau /a;
}
PhanSo tong(PhanSo &p , PhanSo &q ) {
   PhanSo t ;
   t.tu = p.tu * q.mau + q.tu * p.mau;
   t.mau = p.mau * q.mau;
   rutgon(t);
   return t;
}
void in (struct PhanSo &p) {
	cout << p.tu <<"/" <<  p.mau;
}
main () {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
}
