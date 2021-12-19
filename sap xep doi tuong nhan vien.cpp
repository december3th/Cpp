#include<bits/stdc++.h>
using namespace std;
//10/22/1982 01 2 34 5 6789
class NhanVien {
	private:
		string code , name , sex , dayborn , place , mst , daywork ,dayborn1;
		static int dem ;
	public:
		NhanVien () {
			name = sex = dayborn = place = mst = daywork = dayborn1 = "";
		}
		friend istream& operator >> (istream &in,NhanVien &) ;
		friend ostream& operator << (ostream &out ,NhanVien &) ;
		friend void sapxep(NhanVien& , int );
		string getdayborn1 ();
};
int NhanVien::dem = 0 ;
string NhanVien::getdayborn1() {
	return this->dayborn1;
}
bool cmp(NhanVien &a ,NhanVien &b) {
	return a.getdayborn1() < b.getdayborn1();
}
void sapxep(NhanVien *a , int n) {
	sort (a,a+n,cmp);
}
istream& operator >> (istream &in ,NhanVien &a) {
	a.dem++;
	scanf("\n");
	getline(cin,a.name);
	getline(cin,a.sex);
	getline(cin,a.dayborn);
	getline(cin,a.place);
	getline(cin,a.mst);
	getline(cin,a.daywork);
	a.dayborn1 += a.dayborn.substr(6,4) + a.dayborn.substr(0,2) + a.dayborn.substr(3,2);
	a.code = a.code + string(5-to_string(a.dem).length(),'0') + to_string(a.dem);
	return in;
}
ostream& operator << (ostream &out , NhanVien &a) {
	out << a.code << " " << a.name << " " << a.sex << " " << a.dayborn << " " << a.place << " " << a.mst << " " << a.daywork << endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
