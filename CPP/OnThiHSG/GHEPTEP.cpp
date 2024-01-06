#include <iostream>
#include <fstream>
#include <ios>
using namespace std;
//https://cplusplus.com/reference/ios/ios/eof/
int main() {
//	freopen("NGUYEN1.inp", "r", stdin);
//	freopen("NGUYEN12.out", "w", stdout);
ifstream inp("NGUYEN1.INP");
ofstream out;
out.open("NGUYEN12.out");
	int x;
	inp >> x;
	while (!inp.eof()) {
//		cout << x;
		out << x << endl;
		inp >> x;
	}
inp.close();
//NHAP FILE THU 2
	ifstream inp2("NGUYEN2.INP");
	inp2 >> x;
	while (!inp2.eof()) {
//		cout << x;
		out << x << endl;
		inp2 >> x;
	}
inp2.close(); out.close();
	return 0;
}
