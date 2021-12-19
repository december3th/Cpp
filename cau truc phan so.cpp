#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long tu;
	long long mau;
};
void nhap(struct PhanSo &p) {
  cin >> p.tu >> p.mau;
}
void rutgon(struct PhanSo &p) {
	long long a = __gcd(p.tu,p.mau);
	p.tu = p.tu / a;
	p.mau = p.mau /a;
}
void in (struct PhanSo &p) {
	cout << p.tu <<"/" <<  p.mau;
}int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
