/*
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void primeFactors(ll n) {
	int count = 0;
	for (ll i = 2; i <= sqrt(n); i++) {
		count = 0;
		if(n % i == 0){
			while (n % i == 0) {
				count ++;
			n /= i;
			}	
			cout << i << "^" << count << " ";
		}
	}
	if (n != 0) cout << n;
}

//-------pt bang sang ngto---------------------------

void sieve(ll* prime, ll maxn) {
	for (ll i = 2; i <= sqrt(maxn); i++) {
		if (prime[i] == i) {
			for (ll j = i * i; j <= maxn + 1; j += i) if (prime[j] == j) {
				prime[j] = i;
			}
		}
	}
}

void factors(ll* prime, ll n) {
		while (n != 1) {
		ll tmp = prime[n];
		int count = 0;
		while (n % tmp == 0) {
			n /= tmp;
			count ++;
		}
		cout << tmp << " ";
	}
	cout << endl;
}
//----------------------------------------------------------
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	ll n;
	cin >> n;
	primeFactors(n);	
	return 0;
}

*/

#include <iostream>
using namespace std;
#include <map>



int main(){
    int N;
    cout << "\nNhap n = ";
    cin >> N;
    string s = to_string(N);

    
    map<int, int> m;
    for(int i = 2; i <= N; i++){
        while(N % i == 0){
            m[i]++;
            N /= i;
        }
    }
    
    for(auto it : m){
        cout << it.first << " " << it.second << "\n";
    }
}
