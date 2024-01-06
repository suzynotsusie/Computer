#include <bits/stdc++.h>
using namespace std;

#define sint short int

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sint n, m, ans = 0;
	char x;
	cin >> m >> n;
	bool a[m + 5][n + 5] = {};
	for (sint i = 0; i < m; i ++) for (sint j = 0; j < n; j++) {
		cin >> x;
		if (x == '#') a[i][j] = 1;
	}
	
	for (sint i = 0; i < m; i ++) for (sint j = 0; j < n; j++) 
		if (a[i][j] && a[i + 1][j] == 0 && a[i][j + 1] == 0) ans ++;
	cout << ans;
	return 0;
}
