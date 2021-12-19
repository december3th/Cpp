#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())

vector<vector<string>> a;

void init(){
	vector<string> v;
	v.pb("0");v.pb("1");
	a.pb(v);
	for(int i=2;i<=10;i++){
		vector<string> b(a[i-2]);
		reverse(all(b));
		vector<string> x;
		for(int j=0;j<a[i-2].size();++j){
			x.pb("0"+a[i-2][j]);
		}
		for(int j=0;j<b.size();++j){
			x.pb("1"+b[j]);
		}
		a.pb(x);
	}
}

int main(){
	init();
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(string x: a[n-1]){
			cout<<x<<" ";
		}
		cout<<"\n";
	}
}
