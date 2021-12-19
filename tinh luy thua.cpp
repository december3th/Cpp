#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		long long a , b , c ; 
		cin >> a >> b >> c ;
		long long rendu =1 ; 
		for(int i = 0 ; i< b ; i++){
			rendu = (rendu * a) % c ;
		}
		cout << rendu << endl ; 
	}
}

