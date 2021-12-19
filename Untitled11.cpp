#include<bits/stdc++.h>
using namespace std ;
int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
void nhap(int a[150][150] , int n , int m){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++)
            cin >> a[i][j] ;
    }
}
void xuly(int a[150][150], int n, int m){
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(a[i][j]==-1){
                for(int k = 0 ; k < 8; k++){
                    if(i+row[k]==-1 || i+row[k] == n || j+col[k]==-1 || j+col[k]==m){
                        a[i+row[k]][j+col[k]] = 0 ;
                    }
                    if(a[i+row[k]][j+col[k]] >=0 ){

                       // sum = sum + a[i+row[k]][j+col[k]] ;
                        a[i+row[k]][j+col[k]]=0;
                    }
                }
                a[i][j] = 0 ;
            }
        }
    }
    cout << sum << endl ;
}
int main(){
    int n , m , a[150][150] ;
    cin >> n >> m ;
    nhap(a,n,m);
    xuly(a,n,m);
}
