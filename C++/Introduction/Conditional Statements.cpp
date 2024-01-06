#include <iostream>
#include<iomanip>
#include <algorithm>
#include<cmath>
#include<string>
typedef long long ll;
using namespace std;

int main() {

    int n;
    cin >> n;
    if(n == 1) cout << "one\n";
    else if(n == 2) cout << "two\n";
    else if(n == 3) cout << "three\n";
    else if(n == 4) cout << "four\n";
    else if(n == 5) cout << "five\n";
    else if(n == 6) cout << "six\n";
    else if(n == 7) cout << "seven\n";
    else if(n == 8) cout << "eight\n";
    else if(n == 9) cout << "nine\n";
    else cout << "Greater than 9\n";
    return 0;
}
// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true
