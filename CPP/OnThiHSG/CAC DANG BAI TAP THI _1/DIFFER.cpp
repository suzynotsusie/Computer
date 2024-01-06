#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m, n;
	cin >> m >> n;
	char c[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) cin >> c[i][j];
	}
	int count = 0;
	char test;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> test;
			if (test != c[i][j]) count++;	
		}
	}
	cout << count;
	return 0;
}

