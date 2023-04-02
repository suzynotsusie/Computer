// Cho 2 s? nguyên duong a và b. Tìm s? chia h?t cho b l?n nh?t không vu?t qua a.
//input 19 5
//output 15
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a % b == 0) cout << a;
    else cout << a / b * b;
    return 0;
}
