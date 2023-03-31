#include <bits/stdc++.h> 
using namespace std;

int main () {
	int n, x, t, ans;
	cin >> n;
	int oe[n + 5], countoe[n * 2 + 5] = {};
	
	t = n;
	oe[0] = 0;
	ans = 0;
	countoe[0 + t] = 1;
	
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x % 2 == 0) {
			oe[i] = oe[i - 1] + 1;
		} else {
			oe[i] = oe[i - 1] - 1;
		}
		countoe[oe[i] + t]++;
	}
	
	for (int i = 0; i <= n; i++) {
		ans += countoe[oe[i] + t] - 1; 
	}
	
	cout << ans / 2;
	return 0;
}

/*
(THUAT TOAN KHONG TOI UU) 
int main() {
	int n, x;
	cin >> n;
	int countOddEven[2][n + 1];
	countOddEven[0][0] = 0; countOddEven[1][0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		countOddEven[x % 2][i] = countOddEven[x % 2][i - 1] + 1;
		countOddEven[abs(x % 2 - 1)][i] = countOddEven[abs(x % 2 - 1)][i - 1];
	}
	for (int i = 0; i <= n; i++) {
		cout << i << ": " << countOddEven[0][i] << " " << countOddEven[1][i] << endl;
	}
	x = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (countOddEven[0][j] - countOddEven[0][i] == countOddEven[1][j] - countOddEven[1][i]) {
				x++;	
			} 
		}
	}
	cout << x;
	return 0;
}
*/
