//https://codeforces.com/contest/1352/problem/A
//Why this code better: https://g.co/gemini/share/a646dff35132
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);

    int t;
    string s;
    cin >> t;

    // Tính toán truoc luy thua cua 10
    int powers[6] = {1, 10, 100, 1000, 10000, 100000}; 

    for (int i = 0; i < t; i++) {
        cin >> s;
        vector<int> result; // Su dung vector cho dau ra doongj

        for (int c = 0; c < s.length(); c++) {
            if (s[c] != '0') {
                result.push_back((int(s[c]) - '0') * powers[s.length() - c - 1]);
            }
        }

        cout << result.size() << "\n"; 
        for (int num : result) {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	short t;
	string s;
	cin >> t;
	for (short i = 0; i < t; i++) {
		cin >> s;
		short n = s.length();
		cout << n - count(s.begin(), s.end(), '0') << "\n";
		for (short c = 0; c < n; c++) {
			if (s[c] != '0') {
				cout << (int(s[c]) - '0') * pow(10, n - c - 1) << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}*/
