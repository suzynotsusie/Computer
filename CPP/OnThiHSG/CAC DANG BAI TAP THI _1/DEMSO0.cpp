#include <string> // for string data type
#include <iostream>
using namespace std;

int count_zeros_brute_force(int n) {
	int count = 0; // initialize count variable to 0
	for (int i = 1; i <= n; i++) { // loop through numbers 1 to n (inclusive)
		if (to_string(i).find('0') != string::npos) {
			// convert i to string and check if it contains '0'
			count++; // increment count if '0' is found in i
		}
	}
	return count; // return the final count
}

int main() {
	int n = 107;
	cout << count_zeros_brute_force(n) << endl; // output: 17
	
	n = 1264;
	cout << count_zeros_brute_force(n) << endl; // output: 315
	return 0;
}

