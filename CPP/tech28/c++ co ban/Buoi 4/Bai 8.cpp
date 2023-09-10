#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool reverseNum(ll n) {
	short totalDigit = 0;
	ll m = n;
	ll num = 0;
	while (n) {
		totalDigit += n % 10;
		num = (num + n % 10) * 10;
		n /= 10;
	}
//	cout << num / 10 << " " << m << endl;
	if (num / 10 == m && totalDigit % 10 == 0) return true;
	else return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 8.inp", "r", stdin);
//	freopen("Bai 8.out", "w", stdout);
	ll a, b;
	b = 9;
	cin >> a;
	for (ll i = 1; i < a; i ++) b = b * 10 + 9; 
	a = pow(10, a - 1) + 1;
	short count = 0;
	for (ll i = a; i <= b; i++) if (reverseNum(i)) {
		count ++;
//		cout << i << " ";
	}
	cout << count;
	return 0;
}
