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
		string getroom () {
			return this->room;
		}
		string getcode() {
			return this->code;
		}
};
bool cmp(SinhVien a, SinhVien b) {
	return a.getcode() < b.getcode();
}
void sapxep(SinhVien *a, int n) {
	sort(a,a+n,cmp);
}
istream& operator >> (istream& in, SinhVien &a) {
	cin >> a.code ;
	scanf("\n");
	getline(cin,a.name);
	cin >> a.room >> a.email;
	return in;
} 
ostream& operator << (ostream& out , SinhVien &a) {
	cout << a.code << " " << a.name << " " << a.room << " " << a.email << endl;
	return out;
}
main () {
	SinhVien ds[1000];
	int kt = 1 , n = 0;
	while( cin >> ds[n++]);
	sapxep(ds,n);
	for (int i = 0 ; i < n ; i++) cout << ds[i];
}
