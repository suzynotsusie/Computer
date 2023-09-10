#include <bits/stdc++.h> 
using namespace std;

#define ll long long
void primeFactors(ll n) {
	int i = 2;
	while (n != 1) {
		while (n % i == 0) {
			n /= i;
			cout << i << " ";
		}
		i++;
		if (i > sqrt(n)) {
			cout << n;
			break;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 6.inp", "r", stdin);
//	freopen("Bai 6.out", "w", stdout);
	ll n;
	cin >> n;
	primeFactors(n);
	return 0;
}
