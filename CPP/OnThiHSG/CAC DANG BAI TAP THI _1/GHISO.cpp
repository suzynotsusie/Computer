#include <bits/stdc++.h>
using namespace std;

int main() {
	int d = 0, n;
	cin >> n;
	while (n > 0){
		if (n % 2 == 0) n /= 2; else n --;
		d ++;
		cout << n << endl;
	}
	cout << d;
	return 0;
}
