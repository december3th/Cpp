#include<bits/stdc++.h>
using namespace std;
int check(string &s){
    int d11=0,d21=0;
    int ix1 = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='@'){
            d11++;
            ix1 = i ;
        }
        if(s[i]=='.') d21++;
    }
    if(ix1==0) return 0 ;
    if(d11!=1) return 0 ;
    if(d21==0) return 0 ;
    string tmp = ""; string cmp ="";
    for(int i=0;i<ix1;i++){
        tmp = tmp + s[i] ;
    }
    if(tmp.size()>64) return 0 ;
    for(int i=ix1+1;i<s.size();i++){
        cmp = cmp + s[i] ;
    }
    if(cmp.size() > 254) return 0 ;
    int i11=0, i21=0, i31=0, i41=0, i51=0;
    for(int i=0;i<tmp.size();i++){
        if(s[i] >= 'A' && s[i] <= 'Z') i11++;
        if(s[i] >='a' && s[i] <='z') i21++;
        if(s[i]>='0'&&s[i]<='9') i31++;
        if(s[i]=='.') i41++;
        if(s[i]=='_') i51++;
    }
    if(i11==0 && i21==0 && i31==0) return 0 ;
    if(i11+i21+i31+i41+i51!=tmp.size()) return 0 ;
    else {
        int r11=0, r21=0, r31=0, r41=0, r51=0;
        for(int i=0;i<cmp.size();i++){
            if(cmp[i] >= 'A' && cmp[i] <= 'Z') r11++;
            if(cmp[i] >='a' && cmp[i] <= 'z') r21++;
            if(cmp[i]>='0' && cmp[i] <='9') r31++;
            if(cmp[i]=='.') r41++;
            if(cmp[i]=='_') r51++;
        }
        if(r11==0 && r21 ==0 && r31==0) return 0 ;
        if(r41==0) return 0 ;
        if(r11+r21+r31+r41+r51 != cmp.size()) return 0 ;
    }
    return 1 ;
}
main(){
    int t ; cin >> t ;
    cin.ignore(1);
    while(t--){
        string s ;
        getline(cin,s);
        if(check(s)==1) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }
}
