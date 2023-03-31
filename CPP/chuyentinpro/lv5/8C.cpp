#include <bits/stdc++.h>
using namespace std;
	
	int t;
void solve() {
	int n, x, d, result = 0, sumNum = 0;
	cin >> d >> n;
	int sumArr[n + 5];
	sumArr[0] = 0;
	result =  0;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		sumNum += x;
		sumArr[i] = sumNum;
		
	}

	for (int i = 1; i <= n - 1; i++) {
		for (int j = i + 1; j <= n; j++) {
			if ((sumArr[j] - sumArr[i]) % d == 0) result++;
		}
	}
	cout << result << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);
	cin >> t;
	for (int i = 1; i <= t; i++) {
		solve();
	}
	
	return 0;
}
