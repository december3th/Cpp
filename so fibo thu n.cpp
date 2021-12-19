#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long a[100] ; 
	a[1] = 1 ; a[2] = 1 ; a[3] = 2 ; 
	int k = 4 ; 
	while(k<=92){
		a[k] = a[k-1] + a[k-2] ; 
		k++;
	}
	int t ; 
	cin >> t ; 
	while(t--){
		int n ;
		cin >> n ; 
		cout << a[n] << endl ;
	}
}
