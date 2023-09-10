#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	ll m = n / 3;
	cout << 3 * (m * (m + 1)/2);
	return 0;
}
