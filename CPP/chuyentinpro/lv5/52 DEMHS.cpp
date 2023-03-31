#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, q, x;
	cin >> n >> q;
	int hs[4][n + 1];
	hs[1][0] = 0; hs[2][0] = 0; hs[3][0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		hs[1][i] = hs[1][i - 1]; hs[2][i] = hs[2][i - 1]; hs[3][i] = hs[3][i - 1];
		hs[x][i] = hs[x][i - 1] + 1  ;
	}
	for (int i = 1; i <= q; i++) {
		cin >> x >> n;
		cout << hs[1][n] - hs[1][x - 1] << " ";
		cout << hs[2][n] - hs[2][x - 1] << " ";
		cout << hs[3][n] - hs[3][x - 1];
		cout << endl;
	}
	return 0;
}
