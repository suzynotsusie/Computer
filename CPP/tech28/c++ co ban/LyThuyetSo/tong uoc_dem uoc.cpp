#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll tongUoc(ll n) {
	ll total = n + 1;
	for (ll i = 2; i <= sqrt(n); i++)
		if (n % i == 0) {
			total += i;
			if (n / i != i) total += n / i;
		}
	return total;
}

ll demUoc1(ll n) {
	int count = 2;
	for (ll i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			count ++;
			if (n / i != i) count ++;
		}
	}	
	return count;
}

ll demUoc2(ll n) {
	int ans = 1;
	int count;
		for (ll i = 2; i <= cbrt(n); i++) {
			count = 1;
			if(n % i == 0){
				while (n % i == 0) {
					count ++;
					n /= i;
				}	
				ans *= count;
			}
		}
	if (n != 0) ans *= 2;
	return ans - 2;
}

/* this function calculates (a*b)%c taking into account that a*b might overflow 
long long demUoc3(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
*/

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	ll n;
	cin >> n;
	cout << tongUoc(n) << " " << demUoc1(n) << " " << demUoc2(n);
	
	return 0;
}
