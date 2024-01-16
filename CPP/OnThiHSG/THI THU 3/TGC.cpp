#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sint short int


int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//freopen("TGC.inp", "r", stdin);
//freopen("TGC.out", "w", stdout);
	ll n, a, b;
	cin >> n;
	if (n % 4 == 0) a = n / 4 + 1; else a = ceil((double)n / 4);
	if (n % 3 == 0) b = n / 3 - 1; else b = floor((double)n / 3);
	cout << b - a + 1;
	return 0;
}
