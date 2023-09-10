#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll n;
	double ans;
	cin >> n;
	for (int i = 1; i <= n; i++) ans += 1.0/i;
	cout << setprecision(2) << fixed << ans;
	return 0;
}
