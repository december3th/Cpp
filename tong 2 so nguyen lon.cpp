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
	cin.ignore();
	while(t--) {
		char s1[500],s2[500];
		int a[500],n,m,b[500],c[501],k;
		n=1;m=1;
		cin >> s1;
		cin >> s2;
		for (int i = 0; i < strlen(s1); i++) {
			a[n++]=s1[i]-'0';
		}
		for (int i = 0; i < strlen(s2); i++) {
			b[m++]=s2[i]- '0';
		}
		int z=m,d=n;
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

		for (int i = k; i >= 1; i--) {
			tong = a[i]+ b[i] + nho;
			if (tong<=9) {
				nho=0;
				c[x]=tong;
			} else {
				c[x]=tong%10;
				nho=1;
			}
			x--;
		}
		
		for (int i = 1;i <= k; i++) cout << c[i];
		cout << endl;
	}
}
