#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("QUOCKY.INP", "r", stdin);
//	freopen("QUOCKY.OUT", "w", stdout);
	ll n, k;
	double q = (sqrt(5)-1)/2;
	double uk, u1;
	cin >> n >> k >> uk;
	u1 = uk/pow(q, k);
	cout << setprecision(5) << fixed << u1 * pow(q, n) << " " << u1 * pow(q, n - 1);
	cout << "\n" << setprecision(5) << fixed << u1 * q << " " << u1;
	return 0;
}
