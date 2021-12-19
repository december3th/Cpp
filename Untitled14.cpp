#include<bits/stdc++.h>
using namespace std;
int b[20] ={5,3,2,4},c[20] = {10,5,3,6} , a[20] ,kg,gt,toiuu;
vector<int> v;
vector <int> copy(int a[]) {
    vector<int> v(a,a+4);
    return v;
}
void process() {
    gt = 0 ; kg = 0;
    for (int i = 0 ; i < 4 ; i++) { 
        if (a[i]) {
            kg+= b[i];
            gt+= c[i];
        }
    }
    if (kg <= 8 && gt > toiuu) {
        toiuu = gt;
        v = copy(a);
    }
}
void sinh(int i) {
    for (int j = 0 ; j <= 1 ; j++) {
        a[i] = j;
        if (i == 3) process() ; else sinh(i+1);
    }
}
int main () {
    sinh(0);
    cout << toiuu << endl;
    for (int i = 0 ; i < 4 ; i++) cout << v[i] << " ";
}
