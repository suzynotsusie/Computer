#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
freopen("DTMAX.inp", "r", stdin);
freopen("DTMAX.out", "w", stdout);
	ll p, ans;
	cin >> p;
	p /= 2;
	if (p % 2 == 0) {
		p /= 2;
		cout << p * p;
	} else {
		p /= 2;
		cout << p * (p + 1);
	}
	return 0;
}
