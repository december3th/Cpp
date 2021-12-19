#include<bits/stdc++.h>
using namespace std;
struct point{
	int x , y ,z;
};
main () {
int k ; cin >> k ; while (k--) {
	struct point A,B,C,D,E,F,G,H;
	cin >> A.x >> A.y >> A.z >> B.x >> B.y >> B.z >> C.x >> C.y >> C.z >> D.x >> D.y >> D.z;
	E.x = B.x - A.x;E.y = B.y - A.y;E.z = B.z - A.z;
	F.x = C.x - A.x;F.y = C.y - A.y;F.z = C.z - A.z;
	G.x = E.y * F.z - E.z * F.y; G.y = E.z * F.x - F.z * E.x; G.z = E.x * F.y - F.x * E.y;
	H.x = D.x - A.x ;H.y =D.y - A.y ; H.z = D.z - A.z;
	if (G.x * H.x + G.y * H.y + G.z * H.z == 0) cout << "YES" ;
	else cout << "NO";
    }
}
