#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);
	int n, s, x, count = 0;
	int countNum[1000005] = {};
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> x;
		countNum[x]++;		
	}
	if (s % 2 == 0) {
		n = s / 2 - 1;
		count += ((countNum[n + 1] - 1)*countNum[n + 1])/2;
	} else {
		n = s / 2;
	}
	for (int i = 1; i <= n; i++){
		if (countNum[i] == 0) continue;
		if (countNum[s - i] == 0) continue;
		count += countNum[i] * countNum[s - i];
	}
	cout << count;
	
	return 0;
} 
