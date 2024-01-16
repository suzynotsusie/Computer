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
	float a = 10, c, p, h, max = 0, ans;
for (a = 1; a < 100; a ++) {
	for (c = 1; c < a * 2 ; c++) {
		p = (a * 2 + c) / 2;
//		cout << (2 * sqrt(p * (p - a) * (p - a) * (p - c)))/a << " ";
		if ((2 * sqrt(p * (p - a) * (p - a) * (p - c)))/a > max) {
			max = (2 * sqrt(p * (p - a) * (p - a) * (p - c)))/a;
			ans = c;
		}
	}
		cout << a << " " << round(sqrt(2 * a * a)) << " "<< ans << " " << max << endl;;
}
	return 0;
}
