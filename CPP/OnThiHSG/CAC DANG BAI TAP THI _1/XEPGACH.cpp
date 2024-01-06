#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	ll a[n + 5];
	ll total = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i];
	}
	if (total % n != 0) {
		cout << -1;
		return 0;
	} else {
		ll avr = total / n;
		ll ans = 0;
		for (int i = 0; i < n; i++) if (a[i] > avr) ans += a[i] - avr;
		cout << ans;
	}

	return 0;
}
