#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cin>>a[i][j];
    }
	cin>>m;
	int b[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++)cin>>b[i][j];
	}
	for(int i=0;i<=n-m;i+=m){
		for(int j=0;j<=n-m;j+=m){
			for(int u1=0;u1<m;u1++){
				for(int u2=0;u2<m;u2++){
					a[i+u1][j+u2]*=b[u1][u2];
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)cout<<a[i][j]<<" ";
		cout<<endl;
	}
}


