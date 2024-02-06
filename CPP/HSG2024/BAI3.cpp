#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("BAI2.INP", "r", stdin);
//	freopen("BAI2.OUT", "w", stdout);
	ll n, x, max1 = -1000000000, max2 = -1000000000, min1 = 1000000000, min2 = 1000000000, posMax, posMin;
	cin >> n;
	ll a[n + 5];
	a[0] = 0;
	for (int i = 1; i <= n; i ++) {
		cin >> x;
		a[i] = a[i - 1] + x;
//		cout << a[i] << " ";
		if (a[i] > max1) {
			max1 = a[i];
			posMax = i;
		}
		if (a[i] < min2) {
			min2 = a[i];
			posMin = i;
		}
	}
	for (int i = 0; i < posMax; i ++) if (a[i] < min1) min1 = a[i];
	for (int i = posMin + 1; i <= n; i ++) if (a[i] > max2) max2 = a[i];
	x = max(max1 - min1, max2 - min2);
	if (x < 0) cout << 0; else cout << x;
	return 0;
}
