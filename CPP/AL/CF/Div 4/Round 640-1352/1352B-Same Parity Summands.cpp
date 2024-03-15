//https://codeforces.com/contest/1352/problem/B
//Why this code better: https://g.co/gemini/share/a646dff35132
#include <iostream>
#include <string>

#define ll long long

using namespace std;

int main() {
ios_base::sync_with_stdio(0); 
cin.tie(0); 
cout.tie(0);
	short t, k;
	cin >> t;
	ll n;
	for (short i = 0; i < t; i++) {
		cin >> n >> k;
		if ((n % k % 2 != k % 2) || ((n - k < 2)&&(n != k)))cout << "NO\n";
		else {
			cout << "YES\n";
			for (short j = 1; j < k; j++) cout << n / k << " ";
			cout << n - (n/k) * (k - 1) << "\n";
		}
	}
    return 0;
}

