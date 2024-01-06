#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, ans = 0;
	string s = "";
	cin >> n;
	while (n > 2) {
		if (n % 2 == 0) {
			n /= 2;
			ans += 4;
			s = " N2" + s;
		} else {
			n --;
			ans += 2;
			s = " C1" + s;
		}
	}
	ans += 2;
	cout << ans;
	return 0;
}

