//https://codeforces.com/problemset/problem/80/A
#include <bits/stdc++.h>
using namespace std;

void sieve(bool* prime, short maxn) {
	prime[0] = prime[1] = false;
	for (short i = 2; i <= sqrt(maxn); i++) if (prime[i]) {
		for (short j = i * i; j <= maxn + 1; j += i) prime[j] = false;		
	}
	//	for (ll i = 2; i <= maxn; i++) if (prime[i]) cout << i << " ";
}

string solve(bool* prime, short m, short n) {
	for (short i = m + 1; i <= n; i++) if (prime[i]) if (i == n) return "YES"; else return "NO";
	return "NO";	
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("80A.inp", "r", stdin);
//	freopen("80A.out", "r", stdout);
	short a, b;
	cin >> a >> b;
	bool prime[b + 5];
	memset(prime, true, sizeof(prime));
	sieve(prime, b);
	cout <<	solve(prime, a, b);
	return 0;
}

