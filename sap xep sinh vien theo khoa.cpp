#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string code , name , room ,email , khoa;
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
		string getkhoa ()  {
			return this->khoa;
		}
};
istream& operator >> (istream& in, SinhVien &a) {
	cin >> a.code ;
	scanf("\n");
	getline(cin,a.name);
	cin >> a.room >> a.email;
	a.khoa = "20"+a.room.substr(1,2);
	return in;
}  
void sosanh(SinhVien &a, string s) {
	if (s == a.getkhoa()) cout << a ;
	
}
ostream& operator << (ostream& out , SinhVien &a) {
	cout << a.code << " " << a.name << " " << a.room << " " << a.email  <<  endl;
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
		cout << "DANH SACH SINH VIEN KHOA " << s << ":" << endl;
		for ( int i = 0 ; i < n ; i++) {
			sosanh(ds[i],s);
		}
	}
}
