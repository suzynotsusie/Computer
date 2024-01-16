#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sint short int

bool compareStr(string a, string b) {
	int ans = strcmp(a.c_str(), b.c_str());
	if (ans < 0) return 1; else return 0;
}

void sortS(string* s, sint* al) {
	for (sint i = 0; i < 9; i ++) {
		for (sint j = i + 1; j < 10; j ++) {
			if (compareStr(s[j], s[i])) {
				string tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
				sint itmp = al[i];
				al[i] = al[j];
				al[j] = itmp;
			}
		}
	}
}

sint solve(sint* numOrder, string x) {
	sint m = -1 , a, ans;
	for (sint i = 0; i < x.length(); i++) {
		a = numOrder[ int(x[i]) - int('0') ];
//		cout << endl << "a: " << a;
		if (a > m) {
			m = a;
			ans = int(x[i]) - int('0');
		}
		
	}
	return ans;
}

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//freopen("7-LINGVO.inp", "r", stdin);
//freopen("7-LINGVO.out", "w", stdout);

	string s[15], ans[15];
	sint alOrder[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, numOrder[15];
	ll n;
	string x;
	for (sint i = 0; i < 10; i ++) {
		cin >> s[i];
		ans[i] = s[i];
	}
	sortS(s, alOrder);
	for (sint i = 0; i < 10; i ++) numOrder[alOrder[i]] = i;
//	cout << s[2] << s[3] << " " << compareStr(s[2], s[3]);
//	for (sint i = 0; i < 10; i ++) cout << s[i] << " " << alOrder[i] << " " << numOrder[i] << endl;	
	cin >> n;
	for (ll i = 0; i < n; i ++) {
		cin >> x;
		cout << ans[solve(numOrder, x)] << endl;
//		cout << solve(numOrder, x) << endl;
	}

	return 0;

}
