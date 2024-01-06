#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m, n;
	cin >> m >> n;
//	string s = "100";
	int c = 0;
	for (int i = m; i <= n; i++) {
		ostringstream s;
		s << i;
		string l = s.str();
//		if (count(l.begin(), l.end(),'0') == 1) c ++; 
	}
	cout << count;
	return 0;
}
