#include<bits/stdc++.h>
using namespace std;


int main () {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//freopen("Bai2-DanDenMau.inp", "r", stdin);
//freopen("Bai2-DanDenMau.out", "w", stdout);
	int n, i, countP, countA, bulbP, bulbA, maxBulb = 0, flag = 0;
	cin >> n;
	short a[n + 5];
	
	for (i = 0; i < n; i++) cin >> a[i];
	a[i + 1] = -1;
	bulbP = a[0]; countP = 0;
	for (i = 0; i <=n; i++) {
		countP++;
		if (flag) {
			flag = 0;
			continue;
		}
		if (a[i] != a[i + 1]) {
			if (a[i] == a[i + 2]) {
				countP--;
//				cout << i << " " << a[i] << endl;
				flag = 1;
				continue;
			}
			if (countP + 1 > maxBulb) maxBulb = countP + 1;
//			cout << i << " " << bulbP << " " << countP << endl;
			bulbP = a[i + 1];
			countP = 0;
			flag = 0;
		}
	}
	cout << maxBulb;
	return 0;
}
