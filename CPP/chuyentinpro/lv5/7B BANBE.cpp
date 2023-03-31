#include <bits/stdc++.h>
using namespace std;

	int checkChar[95] = {};
	string strA, strB, chars = "";
	
string upper(string str) {
	for (int i = 0; i < str.length(); i++){
		if (str[i] > 90) str[i] -= 32;
	}
	return str;
}
//---------------------------UPPER FUNCTION--------------------------------
void count() {
	for (int i = 0; i < strA.length(); i++) checkChar[strA[i]] = 1;

	for (int i = 0; i < strB.length(); i++){
		if (checkChar[strB[i]] == 1) {
			checkChar[strB[i]] = 2;
		} else if (checkChar[strB[i]] == 0) {
			checkChar[strB[i]] = 3;
		}
	}
}
//------------------------------COUNT VOID---------------------------------------
void check() {
	for (int i = 'A'; i <= 'Z'; i++) {
		if (checkChar[i] == 1 || checkChar[i] == 3) {
			cout << "NO";
			return;
		} else if (checkChar[i] == 2) {
			chars += i;
		}
	}
	cout << "YES" << endl << chars;
}
//------------------------------CHECK VOID----------------------------------------
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin.tie(0);
	
	cin >> strA >> strB;
	strA = upper(strA);
	strB = upper(strB);
	
	count();
	check();
//for (int i = 65; i <= 90; i++) cout << i << ": " << checkChar[i] << endl;

	return 0;
}
