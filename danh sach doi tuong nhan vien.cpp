#include<bits/stdc++.h>
using namespace std;
#define tester() int t ; cin >> t ; while(t--)
#define a() a
class NhanVien{
	private:
		string code , name , sex , day , address , value , daywork ;
		static int dem ;
	public:
		NhanVien () {
			code ="",name="",sex ="",day="",address="",value ="",daywork="";
		}
		friend istream& operator >> (istream &in , NhanVien &) ;
		friend ostream& operator <<  (ostream &out , NhanVien &) ;	
		
};
int NhanVien::dem = 0 ;
istream& operator >>(istream &in,NhanVien &a) {
	a.dem++;
	scanf("\n");
	getline(in,a.name);
	getline(in,a.sex);
	getline(in,a.day);
	getline(in,a.address);
	getline(in,a.value);
	getline(in,a.daywork);
	a.code = a.code + string(5-to_string(a.dem).size(),'0') + to_string (a.dem);
	return in;
}
ostream& operator << ( ostream &out , NhanVien &a) {
	cout << a.code << " " << a.name << " " << a.sex << " " << a.day << " " << a.address << " " << a.value << " " << a.daywork << endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
