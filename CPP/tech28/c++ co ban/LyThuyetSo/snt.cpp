#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll isPrime(ll n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}
void sieve(bool* prime, ll maxn) {
	prime[0] = prime[1] = false;
	for (ll i = 2; i <= sqrt(maxn); i++) if (prime[i]) {
		for (ll j = i * i; j <= maxn + 1; j += i) prime[j] = false;		
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	bool prime[n + 5];
	memset(prime, true, sizeof(prime));

//	cout << isPrime(n) << endl;
	sieve(prime, sizeof(prime) - 5);
//	for (ll i = 2; i <= n; i++) if (prime[i]) cout << i << " ";
	cout << prime[3] << prime[5] << prime[9];
	return 0;
}
