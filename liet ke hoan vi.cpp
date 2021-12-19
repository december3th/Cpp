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
    int a[100];
    for ( int i = 0 ; i < n ; i++) a[dem++] = i + 1;
    std::sort (a,a+n);
    do {
  	  dem1 = 0 ;
  	  for ( int i = 0 ; i < dem ; i++) {
        std::cout << a[i]  ;
	    dem1 ++;
	    if (dem1 == n) cout << " ";
       }
    }   while ( std::next_permutation(a,a+n) );
    cout << endl;
  }
}
