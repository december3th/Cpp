#include<iostream>
#include<cmath>
using namespace std;
int ngto(int n){
	if(n<2) return 0 ; 
	else {
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0) return 0 ;
		}
		return 1 ;
	}
}
int main(){
	int t ; 
	cin >> t ;
	while(t--){
		int n ;
		cin >> n ; 
		int check = 1 ; 
		for(int i = 2 ; i <= n/2 ; i++){
			if(ngto(i) ==1  && ngto(n-i)==1){
				check = 0 ;
				cout << i << " " << n-i ; 
				break ; 
			}
		}
		if(check==1){
			continue ;  
		}
		cout << endl ;  
	}
}

