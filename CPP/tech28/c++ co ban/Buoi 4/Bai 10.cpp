#include <bits/stdc++.h>
using namespace std;

#define ll long long


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	string s = to_string(n);
	short countOdd, countEven = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] % 2 == 0) countEven++; else countOdd++;
	}	
	
	cout << countEven << " " << countOdd;
	return 0;
}
