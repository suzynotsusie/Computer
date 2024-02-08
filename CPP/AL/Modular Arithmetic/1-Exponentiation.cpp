//https://cses.fi/problemset/task/1095
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	ll a, b, ans;
	ll c = 10e9 + 7;
//	cout << c;
	cin >> n;
	for (int i = 0; i < n; i ++) {
		ans = 1;
		cin >> a >> b;
		for (ll j = 0; j < b; j++) {
			ans *= a;
			ans %= c;
		//	cout << ans << "--" << j << endl;
		}
		cout << ans % c << '\n';
	}
	return 0;
}
