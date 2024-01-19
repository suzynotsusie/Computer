switch (x) {                // x must be int
    case X1: a;             // If x == X1 (must be a const), jump here
    case X2: b;             // Else if x == X2, jump here
    default: c;             // Else jump here (optional)
}

#include <cmath>            // Include cmath (std namespace)
sin(x); cos(x); tan(x);     // Trig functions, x (double) is in radians
exp(x); log(x); log10(x);   // e to the x, log base e, log base 10
pow(x, y); sqrt(x);         // x to the y, square root
ceil(x); floor(x);          // Round up or down (as a double)
fabs(x); fmod(x, y);        // Absolute value, x mod y

#include <iostream>         // Include iostream (std namespace)
c = cin.get();              // c = getchar();
cin.get(c);                 // Read char
cin.getline(s, n, '\n');    // Read line into char s[n] to '\n' (default)

//TACH PHAN TU
string s = "28tech    hoc  lap trinh";
//Khai báo stringstream ss và gán cho nó n?i dung c?a s
stringstream ss(s);
string word;
int dem = 0;
while(ss >> word){
	++dem;
	cout << "Tu thu " << dem << " tach duoc : " << word << endl;
} 

//SORT() (sort duoc string)
int a[10] = {1, 5, 3, 9, 34, 99};
sort(a, a + 6, greater<char>());
for (int i = 0; i < 6; i ++) cout << a[i] << " ";


//COMPARISON FUNCTION

bool cmp(int a, int b){
	if(abs(a) > abs(b))
		return true;
	else
		return false;
}

int main(){
	int a[] = {3, -5, -1, 4, -2, 6, -7};
	int n = 7;
	sort(a, a + n, cmp);
	cout << "Mang sap xep theo tri tuyet doi giam dan : \n";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}
