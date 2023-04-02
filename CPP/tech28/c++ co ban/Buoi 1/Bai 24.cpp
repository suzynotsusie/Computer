#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z') cout << char(c + 1);
    else if (c >= 'A' && c <= 'Z') cout << char(c + 33);
    else cout << "INVALID";
    return 0;
}
