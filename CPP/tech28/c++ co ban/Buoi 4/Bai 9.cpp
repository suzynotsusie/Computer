#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(ll n) {
	if (n < 2) return false;
	for (ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false;
	return true;
}

void sieve(bool* prime, ll maxn) {
	prime[0] = prime[1] = false;
	for (ll i = 2; i <= sqrt(maxn); i++) if (prime[i]) {
		for (ll j = i * i; j <= maxn + 1; j += i) prime[j] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 9.inp", "r", stdin);
//	freopen("Bai 9.out", "w", stdout);
	ll a, b;
	cin >> a >> b;
	if (b > 10e6 && a > 10e6) {
		for (ll i = a; i <= b; i++) if (isPrime(i)) cout << i << " ";
	} else {
		ll n;
		if (b > 10e6) n = 10e6; else n = b;
		bool prime[n + 5];
		memset(prime, true, sizeof(prime));
		sieve(prime, n);
		for (ll i = a; i <= n; i++) if (prime[i]) cout << i << " ";
		if (n == 10e6) for (ll i = 10e6 + 1; i <= b; i++) if (isPrime(i)) cout << i << " ";
	}	
	return 0;
}
