#include<bits/stdc++.h>
using namespace std;
int n,a[10],s=0,k;

void in(){
    k=0;
    for (int i=1; i<=6; i++)
        k=k+a[i];
    if (k==15){
        s++;
        for (int i=1; i<=6; i++)
            cout << a[i] << " " << endl;
    }
}

void so(int i){
    for (int j=0; j<=9; j++){
        a[i]=j;
        if (i==6) in();
        else so(i+1);
    }	
}

int main(){
    cout << "99" << endl;
    for (int i=5; i<=6; i++){
        a[1]=i;
        for (int j=6; j<=8; j++){
            a[2]=j;
            so(3);
        }
    }
    cout << endl << s;
}
