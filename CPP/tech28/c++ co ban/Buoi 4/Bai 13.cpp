#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool soDep(ll n) {
	ll m = n, num = 0;
	short total = 0;
	bool sixCheck = false;
//	while (n) {
//		total += n % 10;
//		num = (num + n % 10) * 10;
//		if (n % 10 == 6) sixCheck = true;
//		n /= 10;
//	}
	string s = to_string(n);
	for (short i = 0; i < s.length(); i++) {
		if (s[i] != s[s.length() - i - 1]) return false;
		if (s[i] == '6') sixCheck = true;
		total += s[i] - '0';
	}
	if (sixCheck && total % 10 == 8) return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 13.inp", "r", stdin);
//	freopen("Bai 13.out", "w", stdout);
	ll a, b;
	cin >> a >> b;
	for (ll i = a; i <= b; i ++) if (soDep(i)) cout << i << " ";

	return 0;	
}
