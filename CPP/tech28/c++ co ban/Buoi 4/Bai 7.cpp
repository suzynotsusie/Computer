#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool reverseNum(ll n) {
	string s = to_string(n);
	for (int i = 0; i < s.length() / 2; i ++) if (s[i] != s[s.length() - i - 1]) return false;
//	cout << s[i] << " " << s[s.length() - i - 1] << endl;
	return true;
}

bool check3uocnt(ll n) {
	short count = 0;
	for (ll i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			while (n % i == 0) n /= i;
			count ++;
		}
	}
	if (count < 3) return false; else return true; 
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 7.inp", "r", stdin);
//	freopen("Bai 7.out", "w", stdout);
	ll a, b;
	cin >> a >> b;
	for (ll i = a; i <= b; i ++) if (reverseNum(i) && check3uocnt(i)) cout << i << " ";
	return 0;
}
