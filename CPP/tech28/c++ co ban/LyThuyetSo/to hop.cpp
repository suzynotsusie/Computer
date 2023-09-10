#include <bits/stdc++.h>
using namespace std;

#define ll long long


ll tohop(int n, int k) {
	k = min(k, n - k);
	ll res = 1;
	for (int i = 1; i <= k; i++) {
		res *= (n - i + 1);
		res /= i;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n, k;
	cin >> n >> k;
	cout << tohop(n, k);
	return 0;
}
