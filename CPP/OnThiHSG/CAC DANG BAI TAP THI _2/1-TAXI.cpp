#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, ans;
	short int tmp = 0, x, check = 0, a[5] = {};
	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> x;
		a[x] ++;
	}
	ans = a[4] + a[3];
	a[1] -= min(a[1], a[3]);
	ans += a[2] / 2;
	a[2] %= 2;
	a[1] += a[2];
	if (a[1] > 0) {
		if (a[1] % 4 != 0) check = 1;
		ans += a[1] / 4 + check;
	}
//	cout << a[1] << a[2] << a[3] << endl;
	cout << ans;
	return 0;
}
