//https://codeforces.com/problemset/problem/1520/B
#include <bits/stdc++.h>
using namespace std;

short int digit(long long n) {
	short int ans = 0;
	while (n) {
		ans ++;
		n /= 10;
	}
	return ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	long long n;
	
	cin >> t;
	while (t--) {
		cin >> n;
		short int d = digit(n) - 1;
		long long num = 1;
		for (short int i = 1; i <= d; i ++) num = num * 10 + 1; 
		cout << 9 * d + (n / num) << endl;
	}
	return 0;
}
