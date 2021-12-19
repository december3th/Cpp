#include <iostream>     
#include <algorithm>    
using namespace std;
int main () {
    int k;
    cin >> k;
    while (k--) {
    int n;
    cin >> n;
    int dem = 0,dem1 = 0;
    int a[100000];
    for ( int i = 0 ; i < n ; i++) cin >> a[i];
    ( std::prev_permutation(a,a+n) );
    for ( int i = 0 ; i < n ; i++) cout << a[i] << " ";
    cout << endl;
   }
}

