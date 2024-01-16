#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sint short int

ll isgud(bool* prime, ll x) {
	for (ll j = 0; j < sqrt(x) + 10; j++) if (prime[j] && prime[x-j]) {
		return j;
	}
	return 0;
}
void sieve(bool* prime) {
	prime[0] = prime[1] = false;
	for (ll i = 2; i <= sqrt(2000000); i++) if (prime[i]) {
		for (ll j = i * i; j <= 2000000 + 1; j += i) prime[j] = false;		
	}
}

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
freopen("PTS.inp", "r", stdin);
freopen("PTS.out", "w", stdout);
	bool prime[2000005];
	memset(prime, true, sizeof(prime));
	sieve(prime);
	sint n;
	ll x, ans;
	cin >> n;
	for (sint i = 0; i < n; i ++) {
		cin >> x;
		if (x % 2 == 1) cout << "NO" << endl; else {
			ans = isgud(prime, x);
			if (ans > 0) cout << ans << " " << x - ans << endl; else cout << "NO" << endl;
		}
	}
	return 0;
}
