#include<bits/stdc++.h>
using namespace std;
multiset<int> mu2;
vector< int> ve1;
int dem = 0;
void kt1( int n){
    vector< int> ve;
    int b[100000] = {};
    int x = n;
    while( n != 0){
        int f = n % 10;
        ve.push_back(f);
        b[f]++;
        n /= 10;
    }
    int ok = 1;
    for( int i = 0; i < ve.size(); i++){
        if( ve[i] == 2 || ve[i] == 4 || ve[i] == 6 || ve[i] == 7 || b[ve[i]] > 1){
            ok = 0;
            break;
        }
    }
    if( ok){
        dem++;
        mu2.insert(x);
    }
}
int main(){
    for( int i = 10000; i <= 99999; i++){
        int h = i;
        kt1(h);
    }
    cout << dem << '\n';
    for( auto i : mu2) cout << i << ' ';
    cout << '\n';
    cout << dem;
}
