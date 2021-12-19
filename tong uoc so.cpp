
#include<bits/stdc++.h>
using namespace std;
int b[2*1000000+9]={0};
int a[1000009];
void sangnt(){
	int i,j;
	for(i=2;i<=2*1000000;i++){
		if(b[i]==0){
			b[i]=i;
			for(j=i;j<=2*1000000;j=j+i){
				b[j]=i;
			}
		}
	}
}
int main(){
	int t;
	cin >> t ;
	sangnt();
	long s=0;
	while(t--){
		long n;
		cin >> n;
		while(n>1){
		s=s+b[n];
		n=n/b[n];
		}
	}
	cout << s ;
}

