#include<bits/stdc++.h>
using namespace std ;
long long MAX = 123456789 ;
long long mu(int a , long long n){
    if(n == 0) return 1 ;
    else {
        if(n%2==0) return (mu(a,n/2) * mu(a,n/2)) % MAX ;
        else return a * mu(a,n-1) % MAX ;
    }
}
main(){
    int t ; cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        cout << mu(2,n-1) << endl ;
    }
}

