#include<bits/stdc++.h>
using namespace std;
class PhanSo{
	private:
		long long tu,mau;
	public:
		PhanSo () {
		}
		PhanSo(long long tu, long long mau) {
			this->tu = tu;
			this->mau = mau;
		}
		void rutgon() {
			long long g = __gcd(this->tu,this->mau);
			this->tu /= g;this->mau /= g;
		}
		friend PhanSo operator + (const PhanSo a, const PhanSo b)
		{
			long long mc = a.mau*b.mau/__gcd(a.mau,b.mau);
			PhanSo tong;
			tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
			tong.mau = mc;
			long long g = __gcd(tong.tu, tong.mau);
			tong.tu /= g;
			tong.mau /= g;
			return tong;
		}
		friend ostream& operator  << (ostream& out ,PhanSo a ) {
			cout << a.tu << "/" << a.mau << endl;
			return out;
		} 
		friend istream& operator >> (istream& in , PhanSo &a) {
			in >> a.tu >> a.mau;
			return in;
		}
		
};int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
