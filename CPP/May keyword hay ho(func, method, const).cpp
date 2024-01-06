#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[10] = {5, 3, 8, 2, 19, 100};
	cout << INT_MIN << endl; 
//dung nhu mot bien, la so type int nho nhat: -2.14*10^9
	int n = 6;
	cout << *max_element(a, a + n) << endl;
//func tra ve phan tu lon nhat (phair ddeer daaus sao truocws func)

	cout << *min_element(a, a + n) << endl;
//func tra ve phan tu be nhat


//	for (int &x : a) {
//		x *= 2;
//	}
//	for (int i = 0; i < 6; i ++) cout << i << " ";
//	cout << endl;
//Duyet het phan tu ;~; ee vayaj khoong neen dungf cais nayf ddaau
//Chans honw nuawx laf nos khoong dungf torng c++98 mode trong devc++

	return 0;
}
