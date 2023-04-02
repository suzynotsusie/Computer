#include <bits/stdc++.h>
using namespace std;

int main() {
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << setprecision(2) << fixed <<sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
	return 0;
}
