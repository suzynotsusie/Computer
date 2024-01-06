#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m, n;
	cin >> m >> n;
	int a[m + 5][n + 5] = {};
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) cin >> a[i][j];
	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) cout << a[i][j];
//		cout << endl;
//	}
	int ans = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) if (a[i][j] == 1 && a[i + 1][j] == 0 && a[i][j + 1] == 0) ans ++;
	}
	cout << ans;
	return 0;
}

