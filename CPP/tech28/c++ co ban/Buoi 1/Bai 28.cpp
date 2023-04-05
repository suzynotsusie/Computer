#include <bits/stdc++.h>
using namespace std;

int main() {
	ifstream inp("Bai 28.inp");
	ofstream out;
	out.open("Bai 28.out");
	
	int a, b, c;
	inp >> a >> b >> c;
	int delta = b * b - 4 * a * c;
	if (delta > 0) out << setprecision(2) << fixed << (-b + sqrt(delta))/(2*a) << " " << (-b - sqrt(delta))/(2*a);
	else if (delta == 0) out << setprecision(2) << fixed << -b/2*a; 
	else out << "NO";
	return 0;
}
