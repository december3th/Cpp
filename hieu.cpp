#include<bits/stdc++.h>
using namespace std;
void dichmang1(int b[], int n,int m) {
	int z=m;   
	for (int i= n - 1;i >= 1;i--) {
		b[i]=b[z-1];
		z--;
	}
	for (int i = 1;i <= n - m; i++) {
		b[i]=0;
	}
}
void dichmang(int b[], int n,int m) {
		int z=m;
	for (int i=n-1;i>=1;i--) {
				b[i]=b[z-1];
				z--;
			}
			for (int i=1;i<=n-m;i++) {
				b[i]=0;
			}
}
// 12
// 3500
int main () {
	int t;
	cin >> t;
	while(t--) {
		string s1,s2;
		int n=1; int m=1;
		cin >> s1;
		cin >> s2;	
		int p = s1.size();
		int o = s2.size();
		int z = max(p,o);
		int a[z+10],b[z+10],c[z+10],k;
		for (int i = 0; i < p; i++) {
			a[n++]=s1[i]-'0';
		}
		for (int i = 0; i < o; i++) {
			b[m++]=s2[i]- '0';
		}
		int l=m,d=n;
		if (n>m) {
			dichmang(b,n,m);
		} else {
			dichmang(a,m,n);
		}		
		int x,y,nho=0,tong;
		if (n>=m) {
			x=n-1;
			k=n-1;
		} else {
			k=m-1;
			x=m-1;
		}
        if ( n >= m ) { 
		for (int i = k; i >= 2; i--) {
			tong = a[i]- b[i] - nho;
			if (tong>=0) {
				nho=0;
				c[x]=tong;
			} else {
				c[x]=tong + 10;;
				nho=1;
			}
			x--;
		}
		c[x]=a[1] -b[1]-nho;
		for (int i = 1;i <= k; i++) cout << c[i];}
		else if ( n < m ){
			for (int i = k; i >= 2; i--) {
			tong = b[i]- a[i] - nho;
			if (tong<0) {
				nho=1;
				c[x]=tong+10;
			} else {
				c[x]=tong;
				nho=0;
			}
			x--;
		}
		c[x]=b[1] -a[1]-nho;
		for (int i = 1;i <= k; i++) cout << c[i];}
		cout << endl;
	}
	// 12977
	// 00978
}
