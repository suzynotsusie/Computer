#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string n;
	short int ans = 0;
	cin >> n;
	for (short int i = 0; i < n.length(); i++) {
		switch (n[i]) {
			case '0': case '4': case '6': case '9':
				ans ++;
				break;
			case '8':
				ans += 2;
				break;
		}
	}
	cout << ans;
	return 0;
}
