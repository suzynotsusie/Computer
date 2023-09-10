//https://codeforces.com/problemset/problem/1238/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	short t;
	ll a, b;
	cin >> t;
	for (short i = 1; i <= t; i++) {
		cin >> a >> b;
		if (a - b > 1) cout << "YES" << "\n"; else cout << "NO" << "\n";
	}
	return 0;
} 
