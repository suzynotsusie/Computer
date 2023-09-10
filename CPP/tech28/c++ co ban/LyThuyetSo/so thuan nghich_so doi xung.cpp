#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool reverseNum(ll n) {
	ostringstream str1;
    str1 << n;
    string s = str1.str();
	for (int i = 0; i < s.size()/2; i++) {
		if (s[i] != s[s.size() - 1 - i]) return false;
//	cout << i << " " << s.length() - 1 - i << endl;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	ll n;
	cin >> n;
	cout << reverseNum(n);
	return 0;
}
