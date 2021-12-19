#include<bits/stdc++.h>
using namespace std;
int n , b, a[100],c[100],x[100],xopt[100];
float fopt = 0;
void nhap() {
    a[1] = 10 , a[2] = 5 , a[3] = 3 , a[4]= 4;
    c[1] = 5 , c[2] = 3 , c[3] = 2 , c[4] = 4;
}
bool kiemtra() {
    int sum = 0;
    for (int i = 1 ; i <= 4 ; i++) sum += c[i] * x[i];
    return sum <= 8 ;
}
int tinhgiatrisudung(){
    int sum = 0;
    for (int  i = 1 ; i <= 4 ; i++) sum += a[i] * x[i];
    if (fopt < sum ) {
        fopt = sum;
        for (int i = 1 ; i <= 4 ;i++) xopt[i] = x[i];
    }
}
void inti(int i ) {
    for (int j = 0 ; j <= 1 ; j++) {
        x[i] = j;
        if (i == 4 ) {
            if (kiemtra()) tinhgiatrisudung();
        }
        else inti(i+1);
    }
}
void in() {
    printf("%0.1f",fopt);
    cout << endl;
    for (int i = 1 ; i <= 4 ; i++) cout << xopt[i] << " ";
}
main () {
    nhap();
    inti(1);
    in();
}
