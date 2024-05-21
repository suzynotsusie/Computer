//https://oj.vnoi.info/problem/cn1_dientich1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//freopen("Bai 1-DienTichLonNhat.inp", "r", stdin);
//freopen("Bai 1-DienTichLonNhat.out", "w", stdout);
	ll d, ans = 0;
	cin >> d;
	ll ac = 0;
	ll bcSquare = d * d;
	for (ll ab = 1; ab <= d - 1; ab ++) {
		ac = sqrt(bcSquare - ab * ab);
		if (ab * ab + ac * ac == bcSquare) {
			if (ab * ac > ans)  ans = ab * ac;
		}
	}
	cout << ans;
//	ll ans = 0;
//	double bc = d;
//	double ma = double(d)/2;
////	cout << sqrt(ma) << endl;
//	for (ll ab = 1; ab <= bc/2 + 1; ab++) {
//		double acSquare = 2 * ma * ma + bc * bc / 2 - ab * ab;
////		cout << ab << " " << sqrt(acSquare) << endl;
//		ll tmp = ab * sqrt(acSquare) * 10;
//		if (tmp % 10 == 0) if (tmp/10 > ans) ans = tmp/10;
//	}
//	cout << ans;

	return 0;
}
