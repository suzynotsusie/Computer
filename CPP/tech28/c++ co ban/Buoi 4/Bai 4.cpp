#include <bits/stdc++.h>
using namespace std;

#define ll long long

void sieve(bool* prime, ll maxn) {
	prime[0] = prime[1] = false;
	for (ll i = 2; i <= sqrt(maxn); i++) if (prime[i]) {
		for (ll j = i * i; j <= maxn + 1; j += i) prime[j] = false;		
	}
//	for (ll i = 2; i <= maxn; i++) if (prime[i]) cout << i << " ";
}

// Lam on dung memset trong void

void fibonacci(bool* fibo, ll maxn) {

	ll f1 = 0, f2 = 1;
	fibo[f1] = fibo[f2] = true;
	for (int i = 2; i <= 92; i++) {
		ll fn = f1 + f2;
		fibo[fn] = true;
		f2 = f1;
		f1 = fn;
//		cout << fn << " " << fibo[fn] << endl;
		if (fn >= maxn) break;
	}
}

short maxDigit(ll n) {
	short count = 0;
	while (n) {
		count ++;
		n /= 10;
	}
	return 9 * count;
}

short totalDigit(ll n) {
	short total = 0;
	while (n) {
		total += n % 10;
		n /= 10;
	}
	return total;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
//	freopen("Bai 4.inp", "r", stdin);
//	freopen("Bai 4.out", "w", stdout);
	
	ll a, b;
	
	cin >> a >> b;
	bool prime[b + 5];
	short n = maxDigit(b);
	bool fibo[n + 5];
	memset(prime, true, sizeof(prime));
	memset(fibo, false, sizeof(fibo));
	sieve(prime, b);
	fibonacci(fibo, n);
//	for (int i = 1; i <= n; i++) if (fibo[i]) cout << i << " ";


	for (ll i = a; i <= b; i++) if (fibo[totalDigit(i)] && prime[i]) cout << i << " ";
	return 0;
}
