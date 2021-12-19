#include<bits/stdc++.h>
using namespace std;
struct PT{
    string id, type, chieu, date;
    long long ghe, tien; 
};

void nhap(PT &a){
    cin >> a.id >> a.type >> a.ghe >> a.chieu >> a.date;
}

void inds(PT a[],int  n){
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        if(a[i].chieu == "IN"){
            if(a[i].type == "Xe_con"){
                if(a[i].ghe == 5) mp[a[i].date] += 10000;  
                if(a[i].ghe == 7) mp[a[i].date] += 15000;  
            } 
            if(a[i].type == "Xe_tai"){
               mp[a[i].date] += 20000;   
            }
            if(a[i].type == "Xe_khach"){
                if(a[i].ghe == 29) mp[a[i].date] += 50000;  
                if(a[i].ghe == 45) mp[a[i].date] += 70000;  
            }
        }
    }
    for(auto x : mp){
        cout << x.first << ": "  << x.second;
        cout << endl;
    }
}

main(){
    struct PT ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
