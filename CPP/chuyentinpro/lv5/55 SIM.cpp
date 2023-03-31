#include <bits/stdc++.h>
using namespace std;



int main() {
	int m, n;
	cin >> m >> n;
	long long arr[m + 5][n + 5] = {}, pos1;
	int pos2, pos3, pos4;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> pos1;
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + pos1;
		}
	}
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> pos1 >> pos2 >> pos3 >> pos4;
		cout << arr[pos3][pos4] - arr[pos1 - 1][pos4] - arr[pos3][pos2 - 1] + arr[pos1 - 1][pos2 - 1] << endl; 
	
	}
		
	return 0;
}

/*
THUAT TOAN KHONG TOI UU TINH SUM HANG NGANG
int main() {
	int m,n;
	cin >> m >> n;
	long long arr[m + 5][n + 5] = {}, x, ans = 0;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> x;
			arr[i][j] = arr[i][j - 1] + x;
		}
	}
	int k, pos1, pos2, pos3, pos4;
	cin >> k;
	for (int i = 0; i < k; i++) {
		ans = 0;
		cin >> pos1 >> pos2 >> pos3 >> pos4;
		for (int j = pos1; j <= pos3; j++) {
			ans += arr[j][pos4] - arr[j][pos2 - 1];
		}
		cout << ans << endl;
	}
	return 0;
}
*/
