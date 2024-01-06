// problem Link: https://www.hackerrank.com/challenges/solve-me-first/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template<class T>
T add(T n1, T n2)
{
    return n1 + n2;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}
