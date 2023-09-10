#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isStrong(int* strong, ll n) {
	ll total = 0, m = n;
	while (n) {
		total += strong[n % 10];
		n /= 10;
	}
	if (total == m) return true; else return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 11.inp", "r", stdin);
//	freopen("Bai 11.out", "w", stdout);
	ll a, b;
	cin >> a >> b;
	int strong[15] = {0, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
	for (ll i = a; i <= b; i++ ) if (isStrong(strong, i)) cout << i << " ";
	return 0;
}
