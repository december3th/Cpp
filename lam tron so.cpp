#include<bits/stdc++.h>
using namespace std ;
void xuly(string s){
    int m = s.length() ;
    if(m==1){
        cout << s ;
    }
    else {
        for(int i = m-1 ; i > 0 ; i--){
            if(s[i] >= '5'){
                s[i-1]++;
                s[i] = '0' ;
            }
            else {
                s[i] = '0' ;
            }
            if(s[0] > '9'){
                cout << "1" ;
                s[0] ='0' ;
            }
        }
        for(int i = 0 ; i < m ; i++) cout << s[i] ;
    }
}
int main(){
    int t ;
    cin >> t ;
    while(t--){
        string s ; cin >> s ;
        xuly(s);
        cout << endl ;
    }
}
