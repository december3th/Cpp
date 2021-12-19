#include<bits/stdc++.h>
using namespace std;
#define a() a
void correctday(string &s) {
	if (s[1] == '/' ) s = "0" + s;
	if (s[4] == '/') s.insert(3,"0");
}
string correctname (string &s) {
	string s1 ="";
	string tmp="";
	stringstream ss(s);
	while(getline(ss,tmp,' ')) {
		tmp[0] = toupper(tmp[0]);
		for (int i = 1 ; i < tmp.size() ; i++) tmp[i] = tolower(tmp[i]);
		s1 = s1 + tmp + " ";
	}
	int n = s1.size() - 1;
	s1.erase(s1.length()-1);
	return s1;
}
class SinhVien{
	private:
		string code,name,class1,day;
		double gpa;
		static int dem;
		
	public:
		SinhVien () {
			code = "",name="",class1="",day="";gpa = 0 ;
		}
		friend void sapxep (SinhVien&, int ) ;
		friend istream& operator >> (istream& in, SinhVien &) ;
		friend ostream& operator << (ostream& out , SinhVien &) ;
		float getgpa () ;
};
int SinhVien::dem = 0;
float SinhVien::getgpa() {
	return this->gpa;
}
bool cmp(SinhVien a,SinhVien b) {
	return a.getgpa() > b.getgpa();
}
void sapxep(SinhVien *a ,int n) {
	sort(a,a+n,cmp);
}
istream& operator >> (istream &in , SinhVien &a) {
	a.dem++;
	scanf("\n");
	getline(cin,a.name);
	cin >> a.class1 >> a.day >> a.gpa;
	a.code = a.code + "B20DCCN" + string(3-to_string(a.dem).size(),'0') + to_string(a.dem);
	correctday(a.day);
	a.name = correctname(a.name);
	return in;
} 
ostream& operator << (ostream &out , SinhVien &a) {
	cout << a.code << " " << a.name << " " << a.class1 << " " << a.day << " " ; printf("%0.2lf",a.gpa) ; cout << endl;
	return out ;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
