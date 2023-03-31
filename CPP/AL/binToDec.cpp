#include <bits/stdc++.h>
using namespace std;

int main() {
	string bin = "";
	long long x2 = 1, dec = 0;
	cin >> bin;
	for (int i = bin.length() - 1; i >= 0; i --) {
		if (int(bin[i]) - 48 == 1) dec += x2;
		x2 *= 2;
	}
	cout << dec;
	return 0;
}
