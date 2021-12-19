#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int m , n ; 
		cin >> m >> n ;
		int a[m];
		for(int i = 0 ; i < m ; i++){
			cin >> a[i] ; 
		}
		while(n--){
			int x , y ;
			cin >> x >> y ;
			int sum = 0 ;
			for(int i = x-1 ; i < y ; i++){
				sum = sum + a[i] ;
			}
			cout << sum << endl ;
		}
	}
}

