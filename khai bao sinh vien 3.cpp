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
	public:
		SinhVien () {
			code = "B20DCCN001";
		}
		friend istream& operator >> (istream& in, SinhVien &a ) {
			getline(cin,a.name);
			cin >> a.class1 >> a.day >> a.gpa;
			correctday(a.day);
			a.name = correctname(a.name);
			return in;
		}
		friend ostream& operator << (ostream& out , SinhVien &a) {
			out << a.code << " " << a.name << " " << a.class1 << " " << a.day << " " ; printf("%0.2lf",a.gpa);
			return out;
		}
};
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
