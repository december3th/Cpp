#include <bits/stdc++.h>
using namespace std;
int check(string s){
    int d1=0, d2=0;
    int ix=0,ix1 ;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='@'){
            d1++;
            ix = i;
        }
        if(s[i]=='.') {
        	d2++;
        	ix1 = i;
        }
    }
    if(ix==0) return 0;
    if(d1!=1) return 0;
    if(d2==0) return 0;
    string tmp = ""; string cmp = "";
    for(int i=0; i<ix; i++) tmp = tmp + s[i];
    if(tmp.size()>64) return 0;

    for(int i=ix+1; i<s.size(); i++) cmp = cmp + s[i];
    if(cmp.size()>254) return 0;

    int i1=0, i2=0, i3=0, i4=0, i5=0;
    for(int i=0; i<tmp.size(); i++){
        if(s[i]>='A'&&s[i]<='Z') i1++;
        if(s[i]>='a'&&s[i]<='z') i2++;
        if(s[i]>='0'&&s[i]<='9') i3++;
        if(s[i]=='.') i4++;
        if(s[i]=='_') i5++;
    }
    if(i1==0&&i2==0&&i3==0) return 0;
    if((i1+i2+i3+i4+i5)!=tmp.size()) return 0;
    else {
        int r1=0, r2=0, r3=0, r4=0, r5=0;
        for(int i=0; i<cmp.size(); i++){
            if(cmp[i]>='A'&&cmp[i]<='Z') r1++;
            if(cmp[i]>='a'&&cmp[i]<='z') r2++;
            if(cmp[i]>='0'&&cmp[i]<='9') r3++;
            if(cmp[i]=='.') {
            	r4++;
            	ix1 = i;
			}
            if(cmp[i]=='_') r5++;
        }
        if(r1==0&&r2==0&&r3==0) return 0;
        if(r4==0) return 0;
        if (ix1 == cmp.size() -1 ) return 0;
        if((r1+r2+r3+r4+r5)!=cmp.size()) return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(check(s)==1) cout << "YES\n";
        else cout << "NO\n";
    }
}
//2
//code@ptit.edu.vn
//ptit@ptit
