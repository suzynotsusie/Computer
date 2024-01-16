#include<bits/stdc++.h>
using namespace std;


int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//freopen("SOZ.inp", "r", stdin);
//freopen("SOZ.out", "w", stdout);
	int a,b;
	cin >> a >> b;
	if (a == b) {
		cout << a + b - 1;
	} else cout << max(a, b);
	return 0;
}
