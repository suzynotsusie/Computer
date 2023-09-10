#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool perfectNum(ll n) {
	if (n == 1) return false;
	int total = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			total += i;
			if (n / i != i) total += n/i;
		}
	}
	if (total == n) return true;
	else return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	freopen("Bai 2.inp", "r", stdin);
    freopen("Bai 2.out", "w", stdout);
    
	ll a, b;
    cin >> a >> b;
    for (ll i = a; i <= b; i++) if (perfectNum(i)) cout << i << " ";
	return 0;
}
