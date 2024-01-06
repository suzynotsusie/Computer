//In ra so cac so co dung 3 uoc trong khoang n 
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) if (n % 2 == 0) return false;
	return true;
}

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n;
	cin >> n;
//	for (int i = 2; i <= sqrt(n); i++) if (isPrime(i)) cout << i * i << " ";
	
	return 0;
}
