// Sn = 1/(1*2) + 1/(2*3) + 1/(3*4) + ... + 1/(n(n+1))
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (float)n/(n+1);
    return 0;
}
