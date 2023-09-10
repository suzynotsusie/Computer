#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) ans += i;
		else ans -= i;
	}
	cout << ans;
	return 0;
}
