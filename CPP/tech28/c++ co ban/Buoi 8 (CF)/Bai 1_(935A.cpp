#include <bits/stdc++.h>
using namespace std;


int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int employees, ways = 1;
	cin >> employees;
	for (int i = 2; i <= sqrt(employees); i++) 
		if (employees % i == 0) if (i * i == employees) ways ++; else ways += 2;
	cout << ways;	
	return 0;
}
