#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string code , name , room ,email ;
	public:
		SinhVien () {
			code = name = room = email = "";
		}
		friend void sapxep (SinhVien&, int ) ;
		friend istream& operator >> (istream& in, SinhVien &) ;
		friend ostream& operator << (ostream& out , SinhVien &) ;
		friend void sosanh(SinhVien&,string );
		string getroom () {
			return this->room;
		}
		string getcode() {
			return this->code;
		}
};
istream& operator >> (istream& in, SinhVien &a) {
	cin >> a.code ;
	scanf("\n");
	getline(cin,a.name);
	cin >> a.room >> a.email;
	return in;
}  
void sosanh(SinhVien &a, string s) {
	if (s == a.getroom()) cout << a << endl;
	
}
ostream& operator << (ostream& out , SinhVien &a) {
	cout << a.code << " " << a.name << " " << a.room << " " << a.email ;
	return out;
}
main () {
	int n ;
	cin >> n;
	SinhVien ds[1000];
	for ( int i = 0 ; i < n ; i++) cin >> ds[i];
	int m ; cin >> m;
	for ( int i = 0 ; i < m ; i ++) {
		string s ; cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for ( int i = 0 ; i < n ; i++) {
			sosanh(ds[i],s);
		}
	}
}
