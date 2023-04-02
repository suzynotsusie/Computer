#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("Bai 25.inp", "r", stdin);
	freopen("Bai 25.out", "w", stdout);
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b < c or a + c < b or b + c < a) cout << "NO";
	else cout << "YES";
	return 0;
}
