#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n , m , k ;
	int x ; 
	cin >> n >> m >> k ;
	vector<int> a(n+1,1) ;
	for(int i = 1 ; i <= k ; i++){
		cin >> x ;
		a[x] = 0 ;  	
	}
	int sum = 0 ; 
	for(int i = 1 ; i <= m ; i++) sum = sum + a[i] ;
	int mx = 1e6 ; 
	mx = min(mx,m-sum) ; 
	for(int i = m+1 ; i <= n ; i++){
		sum = sum + a[i] - a[i-m] ;
		mx = min(mx,m-sum);
	}
	cout << mx ; 
}
