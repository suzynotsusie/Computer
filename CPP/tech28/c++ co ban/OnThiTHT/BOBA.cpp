//https://tinhoctre.vn/problem/tht2022_mn_triplet

#include <bits/stdc++.h>
using namespace std;

void swap(long long *xp, long long *yp)
{
    long long temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);
	
	ifstream inp("BOBA.inp");
	ofstream out;
	out.open("BOBA.out");
	
	long long a1, a2, b1, b2, c1, c2, ans, temp;
	
	inp >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

/*
	ans = 0;
	for (long long i = a1; i <= a2; i++ ) {
		for (long long = b1; j <= b2; j++ ) {
			if (i * j >= c1 && i * j <= c2) ans++;
		}
	}
*/
	ans = (a2 - a1 + 1) * (b2 - b1 + 1);
	
	if (a1 * b1 >= c1 && a2 * b2 <= c2) out << ans;
	else {
		if (b2 - b1 < a2 - a1) {
			swap(a1, b1);
			swap(a2, b2);
		}
		
		temp = b2 - b1 + 1;
		
		for (long long a = a1; a <= a2; a ++) 
		if (a * b1 > c2 || a * b2 < c1) {
			ans -= temp;
			continue;
		} else {
			for (long long b = b1; b <= b1 + temp / 2; b++ ) if (a * b < c1) ans--; else break;
			for (long long b = b2; b >= b2 - temp / 2 - 1; b-- ) if (a * b > c2) ans--; else break;

		}
		out << ans;
	}
	inp.close(); out.close();
	return 0;
}
