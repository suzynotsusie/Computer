#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin >> s;
	int g = 0, r = 0, y = 0;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'G') g++;
		else if (s[i] == 'R') r++;
		else if (s[i] == 'Y') y++;
	if (g == r && r == y) cout << "YES"; else cout << "NO";
	return 0;
}

