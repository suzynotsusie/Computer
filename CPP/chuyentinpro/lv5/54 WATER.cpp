#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, highest = 0, highestLaR /*highestLeftandRight*/;
	long long ans = 0;
	cin >> n;
	int h[n + 5];
	h[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> h[i];
		if (h[i] > h[highest]) {
			highest = i;
		}
	}
	highestLaR = h[1];
	for (int i = 2; i < highest; i++) {
		if (h[i] > highestLaR) {
			highestLaR = h[i];
		} else if (h[i] != highestLaR) {
			ans += highestLaR - h[i];
		}
	}
	
	highestLaR = h[n];
	for (int i = n - 1; i > highest; i--) {
		if (h[i] > highestLaR) {
			highestLaR = h[i];
		} else if (h[i] != highestLaR) {  
			ans += highestLaR - h[i];
		}
	}
	
	cout << ans;
	return 0;
}


/*
Y TUONG THAT BAI
int main() {
	int n, highestCol = 0, highCol = 0, sumWater = 0, fullWater, maxHighCol = 0;
	long long ans = 0;
	cin >> n;
	int a[n + 5];
	a[0] = 0; a[n + 1] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	for (int i = 1; i <= n; i++) {
		if (a[i] > a[i + 1]) {
			highCol = i;
			break;
		}
	}
	
	for (int i = highCol; i <= n; i++) {

		if (a[i] > a[i + 1]) {
			fullWater  = min(a[i], a[highCol]) * (i - highCol - 1); //Nuoc toi da co the chua tu cot i den cot highCol
			if (fullWater > sumWater) {
				ans += fullWater - sumWater;
			}
			
			if (a[i] > a[highCol]) {

				fullWater = min(a[i] - a[highCol], a[highestCol] - a[highCol]) * (i - highestCol - 1);
				if (fullWater != 0) {
				ans  += fullWater;
				highestCol = i;
				}

			}		
			if (a[i] > a[highestCol]) {
				highestCol = i;
			}
			highCol = i;
			sumWater = 0;
		} else {
			sumWater += a[i];
		}
	}

	cout << ans;

	return 0;
}
*/

/*
(CACH LAM CUA THAY):
int main() {
	int n;
	long long ans = 0;
	cin >> n;
	int a[n + 5], maxLeft[n + 5], maxRight[n + 5];
	maxLeft[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] > maxLeft[i - 1]) {
			maxLeft[i] = a[i]; 
		} else {
			maxLeft[i] = maxLeft[i - 1];
		}
	}
	maxRight[n] = a[n];
	for (int i = n - 1; i > 1; i--) {
		if (a[i] > maxRight[i + 1]) {
			maxRight[i] = a[i];
		} else {
			maxRight[i] = maxRight[i + 1];
		}
		if (min(maxLeft[i], maxRight[i]) > a[i]){
			ans += min(maxLeft[i], maxRight[i]) - a[i];
		}
	}
	cout << ans;
	return 0;
}
*/


