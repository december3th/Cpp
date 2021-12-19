#include<bits/stdc++.h>
using namespace std;
using ll = long long;
class MonHoc
{
	private:
		string ma1 , mon1 , ngay , time;
	    int tt1;
	public:
		MonHoc()
		{
			ma1 = mon1 = ngay = time = "";
			tt1= 0;
		}
		friend istream& operator >>(istream& in,MonHoc& );
		friend ostream& operator <<(ostream& out,Monhoc );
		string get_ngay()
		{
			return this->ngay;
		}
		string get_time()
		{
			return this->time;
		}
};
bool cmp(DN a,DN b)
{
	if(a.get_quantity()==b.get_quantity())	return a.get_code() < b.get_code();
	return a.get_quantity()>b.get_quantity();
}
void sapxep(DN *a,int n)
{
	sort(a,a+n,cmp);
}
istream& operator >>(istream& in,DN &a)
{
	cin >> a.code;
	scanf("\n");
	getline(cin,a.name);
	cin >> a.quantity;
	return in;
}
ostream& operator <<(ostream& out,DN a)
{
	out << a.code<<" "<<a.name <<" " << a.quantity<<endl;
	return out;
} 
int main(){
    int N, i;
    cin >> N;
    DN ds[50];
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i] ;
    }
    return 0;
}


