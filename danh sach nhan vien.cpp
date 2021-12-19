#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten;
	string sex;
	string day;
	string diachi;
	string  masothue;
	string dayhopdong;	
};
void nhap(struct NhanVien &a) {
    cin.ignore();
	getline(cin,a.ten);
	getline(cin,a.sex);
	getline(cin,a.day);
	getline(cin,a.diachi);
	getline(cin,a.masothue);
	cin >> a.dayhopdong;
}
void inds(struct NhanVien *a,int n) {
	for ( int i = 0 ; i < n; i++) {
		if(i<9)	cout <<"0000"<<i+1<<" ";
		else cout <<"000"<<i+1 <<" ";
    	cout   <<a[i].ten <<  " " << a[i].sex << " " << a[i].day << " " << a[i].diachi << " "<< a[i].masothue << " " <<a[i].dayhopdong  << endl;
   }   
}int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
