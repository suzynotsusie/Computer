#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.14159265

int main() {
	double x = 6.4;
//Tra ve x^n
	cout << pow(x, 2) << endl;
//Tra ve can bac 2 cua x
	cout << sqrt(x) << endl;
//cbrt
//Tra ve gia tri tuyet doi cua x
	x = -6.4;
	cout << abs(x) << endl;
//Tra ve sin(x) theo radian
	x = 90 * PI / 180; //90 degrees
	cout << sin(x) << endl; 
//Tra ve cos(x) theo radian
	x = 180 * PI / 180; //180 degrees
	cout << cos(x) << endl;
//Tra ve logarit(x) 
//log()
//log10()
//https://cplusplus.com/reference/cmath/#:~:text=Exponential%20and%20logarithmic%20functions

//Tra ve e^x
//exp()

//Tra ve so nguyen gan voi x nhat & be hon x
	x = 6.4;
	cout << floor(x) << endl;
//Tra ve so nguyen gan voi x nhat & lon hon x
	cout << ceil(x) << endl;
//Lam tron so nguyen x
//https://cplusplus.com/reference/cmath/#:~:text=Rounding%20and%20remainder%20functions
// So sanh round, floor, ceil, trunc:
//value   round   floor   ceil    trunc
//-----   -----   -----   ----    -----
//2.3     2.0     2.0     3.0     2.0
//3.8     4.0     3.0     4.0     3.0
//5.5     6.0     5.0     6.0     5.0

//-2.3    -2.0    -3.0    -2.0    -2.0
//-3.8    -4.0    -4.0    -3.0    -3.0
//-5.5    -6.0    -6.0    -5.0    -5.0


//Bai 1: Tinh bieu thuc --------------------
	double a, b, c, y, r, h;
	cin >> x >> y;
	cout << "Bieu thuc a: " << (x + y)/(2 + (x/y)) << endl; 
	cin >> a >> b >> r >> h;
	cout << "Bieu thuc b: " << ((a + 4)*(b - 2*c + 3))/((r/2*h) - 9*(a - 1)) << endl;
	cin >> x >> y;
//ep x thanh double diiiii
	cout << "Bieu thuc c: " << pow(x, y) << endl;
	cin >> a >> x;
	cout << "Bieu thuc d: " << exp(sqrt(abs(a + sin(x) * sin(x) - x))) << endl;
	return 0;
}
