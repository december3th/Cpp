#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod(ll a, ll b, ll c)
{
    if (b == 0)
        return 0;
    ll temp = mod(a, b / 2, c);
    if (b % 2 == 0)
        return (2 * (temp % c)) % c;
    else
        return (a  + 2 * (temp % c)) % c;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << mod(a, b, c) << endl;
    }
    return 0;
}
