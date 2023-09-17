//in ra cac scp trong doan tu a toi b
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll n, a, b;
	cin >> a >> b;
//	cout << ceil(sqrt(a)) << " " << floor(sqrt(b)) << endl;
	for(int i = ceil(sqrt(a)); i <= floor(sqrt(b)); i++) {
		cout << (ll)i * i << " ";
	}
	return 0;
}
