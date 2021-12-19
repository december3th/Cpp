#include<bits/stdc++.h>
using namespace std;
int n , a[100][100],xopt[100],x[100],b[100];
float fopt = 999999;
void nhap() {
    cin >> n;
    for (int i = 1 ; i <= n ; i++) {
        for (int j = 1 ; j <= n ; j++) {
            cin >> a[i][j];
        }
    }
}
void check() {
    int sum = 0 ;
    for (int i =1 ; i <= n - 1 ; i++) {
        int d = x[i] ; int d1 = x[i+1];
        sum+= a[d][d1];
    }
    int d2 = x[n],d3 = x[1];
    sum+= a[d2][d3];
    if (fopt > sum) {
        fopt = sum ;
        for (int i = 1 ; i <= n ; i++) xopt[i] = x[i];  
    }
}
void inti() {
    for (int i = 1 ; i <= n ; i++) x[i] = i;
    check();
    while(next_permutation(x+1,x+1+n)) {
        check();
    }
}
main () {
    nhap();
    inti();
    printf("%0.1f",fopt);
    cout << endl; 
    for (int i = 1 ; i <= n ; i++) cout << xopt[i] << " ";
    cout << xopt[1];
}
