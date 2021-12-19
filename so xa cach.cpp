#include<bits/stdc++.h>
using namespace std;
int n, a[12], b[12];
int ktra1(){
    for(int i=1;i<=n;i++){
        if(a[i]==0)
        return 0;
    }
    return 1;
}
int ktra2(){
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i+1])==1)
        return 0;
    }
    return 1;
}
void in(){
    for(int i=1;i<=n;i++){
       // if(ktra1()&&ktra2()) {
            cout<<a[i];
	//	}
    }
    cout << endl;
}
void Try(int i){
    int j;
    for(j=1;j<=n;j++){
        if( b[j]==0){
            a[i]=j;
            b[j]=1;
            if(i==n){ in(); cout << endl;}
            else Try(i+1);
            b[j]=0;
        }
    }
}

int main () {
    int test;
    cin>>test;
    while(test--) {
        cin>>n;
        Try(1);
        cout << endl;
     }
}

