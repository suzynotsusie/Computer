//https://cses.fi/problemset/task/1716
//https://lqdoj.edu.vn/problem/cses1716
//Distributing Apples
//Chia keo euler
#include <bits/stdc++.h>
using namespace std;

 
long long nCr(long long n, long long r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	long long m, n;
	cin >> n >> m;
	cout << nCr(m + n - 1, n - 1);
	return 0;
}
