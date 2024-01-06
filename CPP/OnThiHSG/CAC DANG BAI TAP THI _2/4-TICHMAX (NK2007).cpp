#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int n;
short int a[100005];
short int x, max1 = -30001, max2 = -30001, max3 = -30001, min1 = 30000, min2 = 30000;
	cin >> n;
	if (n == 3) {
		cin >> max1 >> max2 >> max3;
		cout << max1 * max2 * max3;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x > max1) {
			max3 = max2;
			max2 = max1;
			max1 = x;
		} else if (x > max2) {
			max3 = max2;
			max2 = x;
		} else if (x > max3) {
			max3 = x;
		}
		
		if (x < min1) {
			min2 = min1;
			min1 = x;
		} else if (x < min2) {
			min2 = x;
		}
	}
	cout << max(max1*max2*max3, max1*min1*min2);
	return 0;
}
