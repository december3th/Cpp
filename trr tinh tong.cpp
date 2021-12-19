#include<bits/stdc++.h>
using namespace std;
int n , a[200],b[200],k,m,dem3 = 0 , dem4 = 0 ,  kt4  = 0  , kt3;
struct xaucon{
    char xau[100];
    int tt;
};
xaucon ds[1000];
void bdxau(int *a , char s[]) {
    for (int i = 1 ; i <= k ; i++) {
        s[i] = char(a[i] +'0');
    }
}
int kt(int *a , int k) {
    long long sum = 0 ;
    for ( int i = 1 ; i <= k ; i++) sum+= a[i];
    if (sum == m ) return 1 ;
    return 0;
}
int kt2(char s[]) {
    set<char>as;
    for (int i = 1 ; i <= k ; i++) as.insert(s[i]);
    if (k == as.size()) return 1;
    return 0 ;
}
int bd(int i , int *a) {
    for ( int j = 1 ; j <=n ; j++) {
        a[i] = b[j];
        if(i == k) {
            if (kt(a,k)) {
                char s[100];
                int kt = 0 , kt1 = 0 , dem =  0 , dem1 = 0 ,dem2 = 0;
                bdxau(a,s);
                if (k == 2 && s[1] > s[2]) kt = 1;
                else {
                    for (int i = 2 ; i <= k ; i++) {
                        if (s[i] < s[i+1]) dem++;
                        if (s[1] > s[i]) dem1++;
                    }
                    if (dem == k -2  && s[1] > s[2] && kt2(s) && dem1 == k -1 ) kt1 =1 ;
                }
                if (kt == 1 || kt1 == 1) {
                    strcpy(ds[dem3++].xau,s);
                    ds[dem4++].tt = k;
                }
            }
        }else bd(i+1,a);
    }
}
bool cmp (xaucon a , xaucon b) {
    return a.xau[1] > b.xau[1];
}
main () {
    cin >> m >> n ;
    for (int i = 1 ; i <= n ; i++) cin >> b[i];
    sort(b,b+n,greater<int>());
    for ( int i = 2 ; i < n - 1 ; i++) {
        k = i;
        bd(1,a);
    }
    for ( int i = 1 ; i <= n ; i++) if (b[i] == m) kt4 =1 ;
    if (kt4 == 1) cout << m << endl;
    sort(ds,ds+dem4,cmp);
    for ( int i = 0 ; i < dem4 ; i++) {
        kt3 = 0 ;
        for ( int j = 0 ; j < i ; j++) {
            if (strcmp(ds[i].xau,ds[j].xau) == 0) kt3 = 1;
        }
        if (kt3 == 0) {
            for ( int h = 1 ; h <= ds[i].tt ; h++) cout <<ds[i].xau[h] -48 << " ";
            cout << endl;
        }
    }
} 
