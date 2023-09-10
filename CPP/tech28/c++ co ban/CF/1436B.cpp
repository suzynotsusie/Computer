//https://codeforces.com/contest/1436/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("1436B.inp", "r", stdin);
//	freopen("1436B.out", "w", stdout);
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; i < n; i++) {
			for (int x = 1; x <= 2 * (i % (n / 2)); x ++) cout << "0 ";
			cout << "1 1 ";
			for (int y = 1; y <= 2 * ((n / 2) - i % (n / 2) - 1); y ++) cout << "0 ";
			cout << "\n";
		}
	}
	return 0;
}
