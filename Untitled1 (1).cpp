#include<bits/stdc++.h>
using namespace std ; 
void nhap(long int a[] , int n ){
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ; 
	}
}
void xuLy(long int a[] , int n){
	long int b[n*n] ; int dem = 0 ;
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i] > a[j]){
				continue ;
			} else {
				b[dem++] = j - i ;
			}
		}
	}
	sort(b,b+dem);
	cout << b[dem-1] ;
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		cin >> n ; 
		long int a[n] ;
		nhap(a,n) ; xuLy(a,n);
		cout << endl ;
	}
}
