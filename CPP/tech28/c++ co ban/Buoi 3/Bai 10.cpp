#include <bits/stdc++.h>
using namespace std;

#define ll long long

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	cout << factorial(n);
	return 0;
}
