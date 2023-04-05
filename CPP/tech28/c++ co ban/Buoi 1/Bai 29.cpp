#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main() {
	ifstream inp("Bai 29.inp");
	ofstream out;
	out.open("Bai 29.out");
	
	float a, b;
	inp >> a >> b;
	out << floor(b) - ceil(a) + 1;
	return 0;
}
