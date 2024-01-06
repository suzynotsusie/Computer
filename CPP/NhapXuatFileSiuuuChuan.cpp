#include <bits/stdc++.h>
using namespace std;

int main() {
//	#ifndef ONLINE_JUDGE
	freopen("NhapXuatFile.inp", "r", stdin);
	freopen("NhapXuatFile.out", "w", stdout);
//	#endif
//t cungx khoong hieeur maays dongf nayf ddeer lamf gif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);

	int arr[100][100];
	for (int i = 0 ; i < 5; i ++) {
		for (int j = 0; j < 5; j++) {
			cin >> arr[i][j];
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
