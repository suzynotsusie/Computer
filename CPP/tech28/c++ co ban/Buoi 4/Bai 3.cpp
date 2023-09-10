#include <bits/stdc++.h> 
using namespace std;

#define ll long long 
#define ull unsigned long long

void sieve(bool* prime, ll maxn) {
	prime[0] = false;
	prime[1] = false; 
	for (ll i = 2; i <= sqrt(maxn); i++) {
		if (prime[i]) {
			for (ll j = i * i; j <= maxn; j += i) {
				prime[j] = false;
			}
		}
	}
}

bool inc_decNum(int n) {
	bool inc = true;
	if (n % 10 > (n / 10) % 10) inc = false;
	else if (n % 10 == (n / 10) % 10) return false;	
	n /= 10;
	while (n >= 10) {
		if (n % 10 < (n / 10) % 10 != inc) return false;

		n /= 10;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	freopen("Bai 3.inp", "r", stdin);
	freopen("Bai 3.out", "w", stdout);

	short n;
	cin >> n;
	ull maxn = pow(10, n) + 3;
	bool prime[maxn];
	memset(prime, true, sizeof(prime));
	sieve(prime, maxn - 3);
	ull ans = 0;
	for (ll i = maxn / 10; i <= maxn - 3; i++) if (prime[i]) if (inc_decNum(i)) ans++;
	cout << ans;	
		
	
	return 0;
}
