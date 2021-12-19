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
		char getroom () {
			return this->room[0];
		}
		char getcode() {
			return this->code[5];
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
	a.khoa = a.code.substr(5,2);
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
	scanf("\n");
	for ( int i = 0 ; i < m ; i ++) {
		string s ; getline(cin,s);
		string s2 = s; for ( int i = 0 ; i < s2.size() ; i++) s2[i] = toupper(s2[i]);
		cout << "DANH SACH SINH VIEN NGANH " << s2 << ":" << endl;
		for ( int i = 0 ; i < n ; i++) {
			if (ds[i].getroom() == 'E'&& (ds[i].getcode() == 'A' || ds[i].getcode() == 'C')) continue;
			if (ds[i].getcode() == s[0]) cout << ds[i];
		}
	}
}
