#include <bits/stdc++.h>
using namespace std;
	short int pos;
	short int t;
	string a;
	short int countchr['9' + 5];


void countChar() {
	for (int i = '0'; i <= '9' + 5; i++) countchr[i] = 0;
	for (int i = pos - 1; i < a.length(); i++) countchr[a[i]]++;
}

void solve() {
//	for (int i = a[pos - 1]; i <= '9'; i++) cout << char(i) << ": " << countchr[i] << endl;
	short int numChange = a[pos - 1];
	for (int i = numChange + 1; i <= '9'; i++) {
		if (countchr[i] != 0) {
			numChange = i;
			break;
		}
	}
//	cout << char(numChange);

	countchr[pos - 1]++;
//	for (int i = '0'; i <= '9'; i++) cout << char(i) << ": " << countchr[i] << endl;
	a[pos - 1] = char(numChange);
	countchr[numChange]--;
	int i = pos;
//	cout << endl << char(j);
	for (int i = 0; i < pos; i++) cout << char(a[i]);
	for (int i = '0'; i <= '9'; i++ ) {
		if (countchr[i] != 0) for (int j = 0; j < countchr[i]; j++) cout << char(i);
	}
/*
	while (countchr[j] != 0){
		a[i] = j;
		i++;
		countchr[j]--;
		while (countchr[j] == 0) {
		j++;
		if (j > '9') break;
		}
	} 
*/
	cout << endl;
}

int checkStr(string a) {
	for (int i = a.length() - 1; i >= 1; i--) {
		if (a[i] > a[i - 1]) return i;
	}
	return 0;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a;		
		pos = checkStr(a);
		if (pos == 0){
			cout << "BIGGEST" << endl;
		} else {
			countChar();
			solve();
		}
	}
	return 0;
}
