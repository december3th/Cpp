#include<bits/stdc++.h>
using namespace std;
#define a() a
class SinhVien{
	private:
		string code,name,class1,day;
		double gpa;
	public:
		SinhVien () {
			code = "B20DCCN001";
		}
		friend void nhap(SinhVien &a) {
			getline(cin,a.name);
			cin >> a.class1;
			cin >> a.day;
			cin >> a.gpa;
			if (a.day[1] == '/' ) a.day = "0" + a.day;
			if (a.day[4] == '/') a.day.insert(3,"0");
		}
		friend void in(SinhVien &a) {
			cout << a.code <<   " Nguyen Van A " << a.class1 << " " << a.day << " ";
			printf("%0.2lf",a.gpa);
		}			
};
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}
