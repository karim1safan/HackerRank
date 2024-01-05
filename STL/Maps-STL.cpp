// Problem Link: https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int> m;

    int q, type, y;
    string x;
    cin >> q;

    while (q--)
    {
        cin >> type;

        if (type == 1)
        {
            cin >> x >> y;
            m[x] += y;
        }
        else if (type == 2) {
            cin >> x;
            m.erase(x);
        }
        else if (type == 3) {
            cin >> x;
            cout << m[x] << endl;
        }
    }
    return 0;
}



