#include <bits/stdc++.h>
using namespace std;
struct THT{
     int d;
     string msv,ten,lop,meo,dn;
};
typedef struct THT tt;
main(){
     tt h[5005];
     int n,m;
     cin>>n;
     cin.ignore();
     for(int i=1;i<=n;i++){
          h[i].d=i;
          cin>>h[i].msv;
          cin.ignore();
          getline(cin,h[i].ten);
          cin>>h[i].lop>>h[i].meo>>h[i].dn;
     }
     cin>>m;
     cin.ignore();
     for(int i=1;i<=m;i++){
          string g;
          cin>>g;
          multimap<string,int>b;
          for(int j=1;j<=n;j++){
               if(g.compare(h[j].dn)==0){
                    b.insert({h[j].ten,h[j].d});
               }
          }
          for(auto x:b){
               cout<<h[x.second].d<<" "<<h[x.second].msv<<" "<<h[x.second].ten<<" "<<h[x.second].lop<<" "<<h[x.second].meo<<" "<<h[x.second].dn<<endl;
          }
     }
}
