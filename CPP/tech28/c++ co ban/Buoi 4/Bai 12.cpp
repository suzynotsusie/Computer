#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool locPhat(ll n) {
	string s = to_string(n);
	for (int i = 0; i < s.length(); i++) if (s[i] != '0' && s[i] != '6' && s[i] != '8') return false;	
	return true;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 12.inp", "r", stdin);
//	freopen("Bai 12.out", "w", stdout);
	ll n;	
	cin >> n;
	cout << locPhat(n);
	return 0;
}
