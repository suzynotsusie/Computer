#include <bits/stdc++.h>
using namespace std;

int t, x,result, maxNum, minNum;
int	d[1000005];

// shorthand conditional: variable = (condition) ? expressionTrue : expressionFalse;

// khai báo prototype
void nhapVaDem() {
	maxNum = 0;
	minNum = 1000000;
	for (int i = 1; i <= 1000001; i++) d[i] = 0; 
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x > maxNum) maxNum = x;
		if (x < minNum) minNum = x;
		d[x]++; 
	}
//	for (int i = 1; i <= 5; i++) cout << d[i] << endl;
}

void giai() {
	result = 0;
	for (int i = minNum; i < maxNum / 2 + 1; i++) {
		if (d[i] != 0) if (d[i * 2] != 0) {
			x = min(d[i], d[i * 2]);
//			cout << "x: " << x << endl;
			result += x;
			d[i] -= x;
			d[i * 2] -= x;	
		}
	}
	cout << result << endl;
		
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);
	cin >> t;
	for (int i = 1; i <= t; i++) {
		nhapVaDem();
//		cout << "maxmin: "<< maxNum << " " << minNum << endl;
		giai();
	}
	return 0;
}
