#include <bits/stdc++.h>
using namespace std;

int main() {
ifstream inp("binAddBin.inp");
ofstream out;
out.open("binAddBin.out");
	
	
	string bin1 = "", bin2 = "", binSum = "";
	char  adding;
	inp >> bin1 >> bin2;
	
	if (bin1.length() < bin2.length()) {
		binSum = bin1;
		bin1 = bin2;
		bin2 = binSum;
		binSum = ""; 
	}
	while (bin1.length() != bin2.length()) {
		bin2 = "0" + bin2;
	}
	out << bin1 << endl << bin2;	
	for (int i = bin1.length() - 1; i >= 0; i --) {
		adding = char(bin1[i] + int(bin2[i])- 48);
//		out << bin1[i] << " " << bin2[i] << endl;
		out << adding << endl;
	}
inp.close();  
out.close();
	return 0;	
}
