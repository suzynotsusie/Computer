#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		if (s.length() > 11) cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
		else cout << s << endl;
	}
//	cout << s.find("hello") << endl;
//	s.replace(s.find("hello"), 5, "hahaa");
//	cout << s;
	return 0;
}

//     != std::string::npos
