// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
#include <iostream>
#include<iomanip>
#include <algorithm>
#include<cmath>
#include<string>
typedef long long ll;
using namespace std;


int main() {

    string s1, s2;
    cin >> s1 >> s2;

    cout << (int)s1.size() << " ";
    cout << (int)s2.size() << " " << "\n";
    cout << s1+s2 << "\n";

    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << "\n";

    return 0;
}
