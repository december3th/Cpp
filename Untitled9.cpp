#include <bits/stdc++.h>
using namespace std;
int dem=0,n,a[20];
int truyhoi(int n) {
    int a1=2,a2=3;
    if (n==1 || n==2) return 1;
    int i=3,a;
    while (i<=n) {
        a=a1+a2;
        a1=a2;
        a2=a;
        i++;
    }
    return a;
}
int check() {
    for (int i=0;i<n-1;i++) {
        if (a[i]==1 && a[i+1]==1) return 0;
    }
    return 1;
}
void in() {
    if (check()) {
        for (int i=0;i<n;i++) cout<<a[i]<<" ";
        dem++;
        cout<<endl;
    }
}
void sinh(int i) {
    for (int j=0;j<=1;j++) {
        a[i]=j;
        if (i==n-1) in(); else sinh(i+1);
    }
}
int main () {
    cin >> n;
    cout << truyhoi(n) <<endl;
    sinh(0);
    cout<<dem;
}	
