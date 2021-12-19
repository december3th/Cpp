#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ; cin >> n ;
		int a[n] , b[n] ;
		for(int i = 0 ; i < n ; i++){
			cin >> a[i] ;
		}
		for(int i = 0 ; i < n ; i++){
			cin >> b[i] ;
		}
		int max = 0 ; 
		for(int i = 0 ; i < n ; i++){
			int sum1 = 0 , sum2 = 0 ; int k ; 
			for(int j = i ; j < n ; j++){
				sum1 = sum1 + a[j] ;
				sum2 = sum2 + b[j] ;
				if(sum1==sum2) k = j - i + 1 ;
			}
			if(k > max) max = k ;
		}
		cout << max << endl ;
	}
}

