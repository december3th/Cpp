#include <bits/stdc++.h>
using namespace std;
#define tester() int t; cin >> t; while(t--)
main(){
     tester(){
        int m,n,p,k1=0,k2=0,ok=0;
        cin>>m>>n>>p;
        long long a[m],b[n],c[p];
        for(int i=0;i<m;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        for(int i=0;i<p;i++) cin>>c[i];
        for(int i=0;i<m;i++){
             while(a[i]>b[k1]&&k1<n) k1++; 
             while(a[i]>c[k2]&&k2<p)k2++;
             if(a[i]==b[k1]&&a[i]==c[k2]){
                  ok=1;
                  k1++,k2++;
                  cout<<a[i]<<" ";
             }
        }
        if(ok==0)cout<<"-1";
        cout<<endl;
     }
}
