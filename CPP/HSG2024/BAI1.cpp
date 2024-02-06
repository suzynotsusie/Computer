#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	freopen("BAI1.INP", "r", stdin);
//	freopen("BAI1.OUT", "w", stdout);
	ll n;
	cin >> n;
	if (n % 50000 == 0) cout << 0; else cout << 50000 - n % 50000;	
	return 0;
}
