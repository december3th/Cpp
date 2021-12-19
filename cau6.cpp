#include<iostream>
using namespace std;
int n, k, a[105], ok = 1, oke;
void toHop(){
    int i = k;
    while( i > 0 && a[i] == n - k + i) i--;
    if( i == 0) ok = 0;
    a[i]++;
    for( int j = i + 1; j <= k; j++) a[j] = a[i] + j - i;
}
int main()	{
    cin >> k >> n;
    for( int i = 1; i <= k; i++) cin >> a[i];
    oke = 5;
    ok = 1;
    toHop();
    while(ok){
        if( oke == 0) break;
        for( int i = 1; i <= k; i++) cout << a[i] << ' ';
        cout << '\n';
        toHop();
        oke--;
    }
}
