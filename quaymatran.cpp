#include<iostream>
using namespace std;
 
void nhap(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) cin>>a[i][j];
	}
}
 
void xuly(int a[100][100],int kq[100][100],int m,int n){
	int count=0,p=0,sohang=m,socot=n;
	while(count<m*n){
        if(count==(m*n-1)){
			kq[p][p]=a[p][p];
		    break;
		}
		for(int i=p+1;i<socot;i++){ kq[p][i]=a[p][i-1]; count++;}
		for(int i=p+1;i<sohang;i++){ kq[i][socot-1]=a[i-1][socot-1]; count++;}
		for(int i=socot-2;i>=p;i--){ kq[sohang-1][i]=a[sohang-1][i+1]; count++;}
		for(int i=sohang-2;i>=p;i--){ kq[i][p]=a[i+1][p]; count++;}
		p++; sohang--; socot--;
	}
}
 
void xuat(int a[100][100],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++) cout<<a[i][j]<<" ";
	}
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int a[100][100],kq[100][100],m,n;
		cin>>m>>n;
		nhap(a,m,n);
		xuly(a,kq,m,n);
		xuat(kq,m,n);
		cout<<endl;
	}
	return 0;
}