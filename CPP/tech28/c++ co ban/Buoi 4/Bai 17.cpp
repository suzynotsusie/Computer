#include <bits/stdc++.h>
using namespace std;
#define ll long long

short countDigit(ll n) {
	string s = to_string(n);
	return s.length();
}

bool arstrongNum(ll n, short digits) {
	ll ans = 0, m = n;
	for (short i = 1; i <= digits; i ++) {
		ans += pow(n % 10, digits);
		n /= 10;
	}
//	cout << ans << endl;
	if (ans == m) return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 17.inp", "r", stdin);
//	freopen("Bai 17.out", "w", stdout);
	ll n;
	cin >> n;
	for (ll i = 1; i <= n; i ++) if (arstrongNum(i, countDigit(i))) cout << i << " ";
	return 0;
}
