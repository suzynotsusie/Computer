#include <bits/stdc++.h>
using namespace std;

int main() {
	string bin1 = "", bin2 = "", binSum, remainder = "1";
	cin >> bin1 >> bin2;
	if (bin1.length() < bin2.length()) {
		binSum = bin1;
		bin1 = bin2;
		bin2 = binSum;
	}
//	cout << bin1 << endl << bin2;
	binSum = "";
	while (bin1.length() != bin2.length()){
		bin2 = "0" + bin2;
	}
/*
1001011
  10101
1100000
0011111*/
	for (int i = bin1.length(); i >= 0; i --) {
		if (bin1[i] == 1 && bin2[i] == 1) {
			binSum = "0" + remainder + binSum;
			remainder = 1;
		} else if (bin1[i] == 0 && bin2[i] == 0) {
			binSum = "0" + remainder + binSum;
		} else {
			if (remainder == 1) {
				cout << 8;
				binSum = "0" + binSum;
				remainder = 1;
			} else {
				cout << 9;
				binSum = "1" + binSum;
				remainder = 0;
			}
		}
	}
	cout << binSum;	
	return 0;
}
