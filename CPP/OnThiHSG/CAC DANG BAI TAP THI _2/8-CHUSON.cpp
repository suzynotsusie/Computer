#include <iostream>
#include <math.h>
using namespace std;

#define ll long long
#define sint short int

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//freopen("8-CHUSON.inp", "r", stdin);
//freopen("8-CHUSON.out", "w", stdout);

//		ll n, pos = 9;
//		int count = 0;
//		cin >> n;
//		while (pos < n) {
//		    count ++;
//		    pos += (count + 1) * 9 * pow(10, count);
//		}
//		n = n - pos + (count + 1) * 9 * pow(10,count);
//		cout << count << " " << n;
//		string num = (string)"1" * count;

	ll n, num, sum;
	cin >> n;
	sum = n;
	int len = to_string(n).length(), tmp = 9, count = 0;
	if (n < 10) cout << n; else {
		while (n - tmp >= 0) {
			n -= tmp;
			count++;
			tmp = (count + 1) * 9 * pow(10, count);
		}
		//	cout << n << " " << count << " " << tmp << endl;
		num = 9;
		for (short i = 1; i < count; i++) {
			num = num * 10 + 9;
		}
		//	cout << "\n" << num << endl;
		len = count + 1;
		if (n % len == 0) cout << to_string(num + n / len)[count];
		else {
			cout << to_string(num + n / len + 1)[n % len - 1];
		}
	}
	
	cout << endl;
//----------TEST------------------
//	ll so = 1;
//	n = sum, len = 0;
//	while (n - len > 0) {
//		len += to_string(so).length();
//	//	cout << so << " " << len << endl;
//		so ++;
//	}
//	if (len == n) cout << to_string(so - 1)[to_string(so).length() -1];
//	else {
//		so --;
//		len -= to_string(so).length();
//		cout << to_string(so)[n - len - 1];
//	}
		return 0;
}
