#include<bits/stdc++.h>
using namespace std;
class SinhVien
{
	public:
	string ten;
	int tuoi;
	float diem;
	friend istream &operator >> (istream &is, SinhVien &a);
	friend ostream &operator << (ostream &os, const SinhVien &a);
	public: int operator > (const SinhVien &a2);
};
istream &operator >> (istream &is, SinhVien &a)
{
	cout<<"\tNhap ten: "; cin.ignore(); getline(cin,a.ten);
	cout<<"\tNhap tuoi: "; is>>a.tuoi;
	cout<<"\tNhap diem: "; is>>a.diem;
	return is;
}
ostream &operator << (ostream &os, const SinhVien &a)
{
	cout<<"\n\tHT: "<<a.ten;
	cout<<"\n\tTuoi: "<<a.tuoi;
	cout<<"\n\tDiem: "<<a.diem<<endl;
	return os;
}
int SinhVien::operator >(const SinhVien &a2)
{
	SinhVien a1=*this;
	if(a1.tuoi>a2.tuoi)
		return 1;
	return 0;
}
class LopHoc
{
	public:
		int n;
		SinhVien *a;
	friend istream &operator >> (istream &is, LopHoc &ds);
	friend ostream &operator << (ostream &os, const LopHoc &ds);
	friend float dtb (LopHoc &ds);
	friend void Diem_tang(LopHoc &ds);
	friend void Tuoi_giam(LopHoc &ds);
};
istream &operator >> (istream &is, LopHoc &ds)
{
	int i;
	cout<<"Nhap n= "; is>>ds.n;
	ds.a = new SinhVien[ds.n];
	for(i=0;i<ds.n;i++){
		cout<<"Nhap thong tin sv thu "<<i+1<<":"<<endl;
		is>>ds.a[i];
	}
	return is;
}
ostream &operator << (ostream &os, const LopHoc &ds)
{
	for(int i=0;i<ds.n;i++){
		cout<<i+1<<".";
		cout<<ds.a[i];
	}
	return os;
}
float dtb (int k, LopHoc &ds)
{
	int dem=0;
	float s=0;
	for(int i=0;i<ds.n;i++){
		if(ds.a[i].tuoi==k){
			s+=ds.a[i].diem;
			dem++;
		}
	}
	return s/(1.0*dem);
}
void Diem_tang(LopHoc &ds)
{
	for(int i=0;i<ds.n-1;i++){
		for(int j=i+1;j<ds.n;j++){
			if(ds.a[i].diem > ds.a[j].diem) 
				swap(ds.a[i],ds.a[j]);
		}
	}
}
void Tuoi_giam(LopHoc &ds)
{
	for(int i=0;i<ds.n-1;i++){
		for(int j=i+1;j<ds.n;j++){
			if(ds.a[i].tuoi < ds.a[j].tuoi) 
				swap(ds.a[i],ds.a[j]);
		}
	}
}
int main()
{
	LopHoc a; 
	int k;
	cout<<"Nhap lop hoc: ";
	cin>>a;
	cout<<"Lop hoc vua nhap: \n"<<a;
	cout<<"Tinh diem trung binh theo tuoi k: ";
	cout<<"Nhap k: "; cin>>k;
	cout<<"Diem trung binh la: "<<dtb(k,a);
	Diem_tang(a); cout<<"Ds lop theo diem tang: \n"<<a;
	Tuoi_giam(a); cout<<"Ds lop theo tuoi giam: \n"<<a;
}
