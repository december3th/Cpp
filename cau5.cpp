#include<iostream>
using namespace std;
int n, a[100], ok = 1;
void sinh(){
    int i;
    for( i = n; i > 0; i--){
        if( a[i] == 1) a[i] = 0;
        else{
            a[i] = 1;
            break;
        }
    }
    if( i == 0) ok = 0;
}
bool dkien(){
    for( int i = 1; i < n; i++){
        if( a[i] == 1 && a[i+1] == 1) return false;
    }
    return true;
}
int main(){
    cin >> n;
    int a1 = 2, a2 = 3, an;
    for( int i = 3; i <= n; i++){
        an = a1 + a2;
        a1 = a2;
        a2 = an;
    }
    cout << an << '\n';
    int k = 0;
    while(ok){
        if( dkien()){
            k++;
            for( int i = 1; i <= n; i++) cout << a[i] << ' ';
            cout << '\n';
        }
        sinh();
    }
    cout << k;
}
