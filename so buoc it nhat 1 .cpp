
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a;i < b;i++)
#define tester()	int t;cin >> t;while(t--)
const int MOD = (int) 1e9+7;
int main(){
	tester()
	{
		int n;
		cin>>n;
		double a[n];
		int  l[n],s=0;
		FOR(i,0,n) cin>>a[i];
		for(int i=0;i<n;i++){
			l[i]=1;
			for(int j=0;j<i;j++){
				if(a[j]<=a[i]&&l[i]<l[j]+1) l[i]=l[j]+1;
			}
			if(l[i]>s) s=l[i];
		}
		cout<<n-s<<endl;
	}
}
