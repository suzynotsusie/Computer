
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);
	string s;
	cin >> s;
	s += " ";
	int index = 0, endStr = s.length() - 1, tempPos = s.length() - 1, result = 0;
	while (index < s.length() - 1) {
		while (index < endStr) {
			if (s.find(s[index], index + 1) <= 255) tempPos = s.find(s[index], index + 1);
			if (tempPos < endStr) endStr = tempPos;
			index++;
		}
		result++;
		endStr = s.length() - 1;
		tempPos = s.length() - 1;
	}
	cout << result;
	return 0;
}//abc|bdet|d
//   * *
