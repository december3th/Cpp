#include<bits/stdc++.h>
using namespace std;
int a[1005] , n , ok = 1;
void sinh() {
    int i = n -1 , p = n;
    while (a[i  > a[i+1]]) i --;
    if (i == 0) ok = 0;
    while(a[i] > a[p]) p--;
    swap(a[i],a[p]);
    int l = i + 1, r= n;
    while( l <= r) {
        swap(a[l],a[r]);
        l++;
        r--;
    }
}
int main () {
    cin >> n;
    for (int i =1 ; i <= n ; i++) cin >> a[i];
    int k = 4;
    while (k--) {
        sinh();
        for (int i = 1 ; i <= n ; i++    ) cout << a[i] << " ";
        cout << '\n';
    }
}
