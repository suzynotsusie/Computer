#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);
	
	int lineSegment[1005] = {};
	short int n, x, y, maxLineSegment = 0;
// maxNum = 0, minNum = 1000,
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
//		cout << x << " " << y << " " << min(x, y) << " " << max(x,y) << endl;
		for (int j = min(x, y); j < max(x, y); j++){
			lineSegment[j]++;
		}
//		if (max(x,y) > maxNum) maxNum = max(x,y) - 1;
//		if (min(x,y) < minNum) minNum = min(x,y);
	}
	int count = 0;
//	for (int i = minNum; i <= maxNum; i++) cout << i << ": " << lineSegment[i] << endl;
	for (int i = 0; i <= 1000; i++){
		if (lineSegment[i] > maxLineSegment){
			maxLineSegment = lineSegment[i];
			count = 1;
		} else if (lineSegment[i] == maxLineSegment) count++;
	}
	cout << count;
	return 0;
}
