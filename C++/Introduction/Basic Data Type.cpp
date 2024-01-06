#include <iostream>
#include<iomanip>
#include <algorithm>
#include<cmath>
#include<string>
typedef long long ll;
using namespace std;

int main() {

    int i;
    ll l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;

    cout << i << "\n";
    cout << l << "\n";
    cout << c << "\n";
    cout << fixed << setprecision(3) << f << "\n";
    cout << fixed << setprecision(9) << d << "\n";

    return 0;
}
// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
