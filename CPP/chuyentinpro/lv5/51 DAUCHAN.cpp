#include<bits/stdc++.h>
using namespace std;
 
int main() {
	string n;
	int left, ans = 0;
	cin >> n;
	for (int i = 0; i < n.size() - 1; i++) {
		if (n.substr(i, 2) == "((") {
			left++;
		} else if (n.substr(i, 2) == "))") {
			ans += left;
		}
	}
	cout << ans;
	return 0; 
}
