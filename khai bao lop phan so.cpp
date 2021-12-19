#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo(long long tu, long long mau) {
			this->tu = tu;
			this->mau = mau;
		}
		void rutgon() {
			long long g = __gcd(this->tu,this->mau);
			this->tu /= g;this->mau /= g;
		}
		friend ostream& operator  << (ostream& out ,PhanSo& a ) {
			cout << a.tu << "/" << a.mau << endl;
			return out;
		} 
		friend istream& operator >> (istream& in , PhanSo &a) {
			in >> a.tu >> a.mau;
			return in;
		}
		
};int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
