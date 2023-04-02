#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("Bai 26.inp", "r", stdin);
	freopen("Bai 26.out", "w", stdout);
	int a, b, c, temp;
	cin >> a >> b >> c;
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	cout << a << " " << b << " " << c;
	cout << "hehe";
	if (a + b > c) {
		if (a == b) {
			if (b == c) cout << 1;
			else cout << 2;
		} else if (sqrt(a * a + b * b) == c) cout << 6;
		else cout << 4;
	} else cout << "INVALID";
	"Bai 26.inp".close();
	"Bai 26.out".close();
	return 0;
}
