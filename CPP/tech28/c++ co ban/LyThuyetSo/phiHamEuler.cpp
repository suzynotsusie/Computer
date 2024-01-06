#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll phi(ll n) {
	ll ans = n;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			ans = ans - ans / i;
			while (n % i == 0) n /= i;
		}
	}
	if (n > 0) ans = ans - ans / n;
	return ans;
}

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	cout << phi(n);
	return 0;
}
