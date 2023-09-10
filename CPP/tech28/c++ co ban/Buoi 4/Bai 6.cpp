#include <bits/stdc++.h>
using namespace std;

#define ll long long


void sieve(ll* prime, ll maxn) {
	for (ll i = 2; i <= sqrt(maxn); i++) {
		if (prime[i] == i) {
			for (ll j = i * i; j <= maxn + 1; j += i) if (prime[j] == j) {
				prime[j] = i;
			}
		}
	}
}

void factors(ll* prime, ll n) {
		while (n != 1) {
		ll tmp = prime[n];
		int count = 0;
		while (n % tmp == 0) {
			n /= tmp;
			count ++;
		}
		cout << tmp << " ";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
//	freopen("Bai 6.inp", "r", stdin);
//	freopen("Bai 6.out", "r", stdout);
	ll n;
	cin >> n;
	ll prime[n + 5];
	ll maxn = sizeof(prime) / sizeof(prime[0]) - 5;
	for (ll i = 2; i <= maxn; i++) prime[i] = i;
	sieve(prime, n);
	for (ll i = 2; i <= n; i++) cout << prime[i] << " ";
	cout << endl;
	while (n != 1) {
		ll tmp = prime[n];
		int count = 0;
		while (n % tmp == 0) {
			n /= tmp;
			count ++;
		}
		cout << tmp << " ";
	}		
	return 0;
}
