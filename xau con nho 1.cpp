#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;cin.ignore();
    while(t--){
        int ok=0,a[256]={0},c[256]={0};
        string s1,s2,s3="";
        cin>>s1>>s2;
        for(int i=0;i<s2.size();i++){
            a[s2[i]]++;
        }
        for(int i=0;i<s1.size();i++){
            int b[256]={0},m=0;
            string s="";
            for(int j=i;j<s1.size();j++){
                if(s2.find(s1[j],0)!=-1){
                    ok=1;
                    if(b[s1[j]]<a[s1[j]]){
                        b[s1[j]]++;
                        m++;
                    }
                }
                s+=s1[j];
                if(m==s2.size()) break;
            }
            if(i==0) s3=s;
            else{
                if(m==s2.size()&&s3.size()>s.size()){
                    s3=s;
                }
            }
           // break;
        }
       // cout<<s3;
       for(int i=0;i<s3.size();i++){
           c[s3[i]]++;
       }
       for(int i=0;i<s2.size();i++){
           if(a[s2[i]]>c[s2[i]]){
               ok=0;
               break;
           }
       }
       if(ok==0||s1.size()<s2.size()){
           cout<<-1;
       }else{
           cout<<s3;
       }
       cout<<endl;
    }
}
