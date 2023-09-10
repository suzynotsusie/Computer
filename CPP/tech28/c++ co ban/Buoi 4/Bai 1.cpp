#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(ll n) {
	if (n < 2) return false;
	for (ll i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return false;
	}
	return true;
}
bool digitPrime(ll n) {
	int total = 0;
	while (n) {
		short d = n % 10;
		if (d != 2 && d != 3 && d != 5 && d != 7) return false;
		total += d;
		n /= 10;
	}
	if (isPrime(total)) return true;
	else return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("Bai 1.INP", "r", stdin);
    freopen("Bai 1.OUT", "w", stdout);
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    for (ll i = a; i <= b; i++) if (digitPrime(i) && isPrime(i)) ans ++;
    cout << ans;
	return 0;
}
