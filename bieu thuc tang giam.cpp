#include<bits/stdc++.h>
using namespace std ;
void xuly(string s){
    int d = 0 ; vector<int> a ;
    for(int i = 0 ; i < s.size();i++){
        if(s[i]=='D'){
            d++; a.push_back(d);
        } else {
            d++;
            a.push_back(d);
            while(a.size()>0){
                cout << a[a.size()-1] ;
                a.erase(a.begin()+a.size()-1);
            }
        }
    }
    d++;
    a.push_back(d);
    while(a.size()>0){
        cout << a[a.size()-1] ;
        a.erase(a.begin()+a.size()-1);
    }
  // DDIDDIID
}
main(){
    int t ; cin >> t ;
    for(int i = 0 ; i < t ; i++){
        string s ; cin >> s ;
        cout << "Test " << i+1 << ": " ;
        xuly(s);
        cout << endl ;
    }
}
