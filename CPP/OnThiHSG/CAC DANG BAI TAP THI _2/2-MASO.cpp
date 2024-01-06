#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	short int x, k;
	int sum = 0;
	string nums, letters;
	cin >> k;
	cin >> nums;
	for (short int i = 0; i <= 6; i++) {
		cin >> x;
		sum += ((int(nums[i]) - 48) * x);
	}
	cin >> letters;
//	cout << letters << nums << " " << sum;
	sum = sum % k;
	cout << letters[sum];
	return 0;
}
