#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("BAI2.INP", "r", stdin);
//	freopen("BAI2.OUT", "w", stdout);
	ll n;
	int len, ans;
	cin >> n;
	string s = to_string(n);
	len = s.length() - 1;
	ans = 0;
	for (int i = 0; i < len; i++) {
		ans += (i + 1) * 9 * pow(10, i);
	}
//	cout << (n - pow(10, len) + 1) << endl;
	ans = ans + (n - pow(10, len) + 1) * (len + 1);

//---------------test-----------------
//	int test = 0;
//	for (ll i = 1; i <= n; i++) {
//		string t = to_string(i);
//		test += t.length();
//	}	
//	cout << ans << " " << test << endl;
	cout << ans * 8 << "0000";
	return 0;
}
