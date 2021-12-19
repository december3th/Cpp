#include<bits/stdc++.h>
using namespace std;
#define tester() int t ; cin >> t ; while(t--)
#define a() a
class NhanVien{
	private:
		string code , name , sex , day , address , value , daywork ;
	public:
		NhanVien () {
			code = "00001";
		}
		friend istream& operator >> (istream &in , NhanVien &a) {
			getline(in,a.name);
			in >> a.sex >> a.day;
			cin.ignore();
			getline(in,a.address);
			in >> a.value >> a.daywork;
			return in;
		}
		friend ostream& operator <<  (ostream &out , NhanVien &a) {
			cout << a.code << " " << a.name << " " << a.sex << " " << a.day << " " << a.address << " " << a.value << " " << a.daywork ;
			return out ;
		}
};
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}
