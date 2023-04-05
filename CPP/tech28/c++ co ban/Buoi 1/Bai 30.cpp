#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream inp("Bai 30.inp");
	ofstream out;
	out.open("Bai 30.out");
	
	long long a, b, c;
	inp >> a >> b >> c;
	if (a/b == c or b/c == a or c/a == b) out << "/";
	else out << "NOSOL";
	return 0;
}
