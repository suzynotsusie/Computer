#include <bits/stdc++.h>
using namespace std;

int main() {
	long  long dec;
	string bin;
	cin >> dec;
	while (dec != 0) {
		bin = char(dec % 2 + 48) + bin;
		dec /= 2;
	}
	cout << bin;
	return 0;
}
