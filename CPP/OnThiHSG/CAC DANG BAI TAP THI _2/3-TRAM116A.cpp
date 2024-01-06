#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	short int n, x = 0, max = 0, a, b;
	cin >> n;
	for (int i = 0; i < n; i ++) {
		cin >> a >> b;
		x = x - a + b;
		if (x > max) max = x;
	}
	cout << max;
	return 0;
}
