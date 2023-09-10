#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool squareNum(ll n) {
	if (sqrt(n) * floor(sqrt(n)) == n) return true;
	else return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll a, b, n;
	cin >> n >> a >> b;
	cout << squareNum(n) << endl;
	cout << floor(sqrt(b)) - ceil(sqrt(a));
	return 0;
}
