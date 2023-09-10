#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fibonacci(short n) {
	short f1 = 0, f2 = 1;
	cout << f1 << " ";
	for (short i = 2; i <= n; i++) {
		short fn = f1 + f2;
		f2 = f1;
		f1 = fn;
		cout << fn << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("Bai 5.inp", "r", stdin);
//	freopen("Bai 5.out", "w", stdout);
	short n;
	cin >> n;
	fibonacci(n);
	return 0;
}
