//https://codeforces.com/problemset/problem/1154/A
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;
	long long m = max({a, b, c, d});
	if (m - a > 0) cout << m - a << " ";
	if (m - b > 0) cout << m - b << " ";
	if (m - c > 0) cout << m - c << " ";
	if (m - d > 0) cout << m - d << " ";
	return 0;
}
