#include<bits/stdc++.h>
using namespace std;
class MonHoc{
public:
    string mamh,tenmh;
    friend istream &operator >> (istream &in, MonHoc &a) {
        cin >> a.mamh;
        cin.ignore();
        getline(cin,a.tenmh);
        return in;
    }
};
class LichThi{
public:
    string mathi="T",mamh,date,hour,gr,tenmh,gio,phut;
    static int j;
    friend istream &operator >> (istream &in, LichThi &a) {
        // cin.ignore();
        // getline(cin,a.mamh);
        cin >> a.mamh ;
        cin>> a.date >> a.hour >> a.gr;
        if (j<=9) a.mathi=a.mathi + "00" + to_string(j); else a.mathi= a.mathi + "0" + to_string(j);
        j++;
        return in;
    }
    friend ostream &operator << (ostream &out, LichThi a) {
        cout<<a.mathi<<" " << a.mamh <<" " << a.tenmh << " " <<a.date<<" "<<a.hour<<" "<<a.gr<<endl;
        return out;
    }
};
int LichThi::j=1;
bool cmp(LichThi a, LichThi b) {
    a.date.erase(5,1);
    a.date.erase(2,1);
    b.date.erase(5,1);
    b.date.erase(2,1);
    if (a.date==b.date && a.hour==b.hour) return a.mamh < b.mamh;
    else {
        if (a.date==b.date && a.gio==b.gio) return a.phut < b.phut; 
        else {
            if (a.date==b.date) return a.gio < b.gio; 
            else {
                return a.date > b.date;
            }
        }
    }
}
void process(MonHoc mh[], int n, LichThi lt[], int m) {
    for (int i=0;i<m;i++) {
        for (int k=0;k<n;k++) {
            if (lt[i].mamh==mh[k].mamh) {
                lt[i].tenmh=mh[k].tenmh;
            }
        }
    }
    for (int i=0;i<m;i++) {
        lt[i].gio= lt[i].hour.substr(0,2);
        lt[i].phut= lt[i].hour.substr(3,2);
    }
    sort(lt,lt+m,cmp);
}
int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}
