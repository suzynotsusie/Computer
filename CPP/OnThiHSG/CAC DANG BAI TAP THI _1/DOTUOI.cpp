#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, count = 0, ans = 0;
	cin >> n;
	short age1 = -1, age2;
	for (int i = 0; i < n; i++) {
		cin >> age2;
		if (age1 == age2) count++; 
		else {
			if (count > ans) ans = count + 1;
			count = 0;
		}
		age1 = age2;
	}
	cout << ans;
}
