// Problem Link: https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        v.push_back(in);
    }

    int q1, q2, q3;
    cin >> q1 >> q2 >> q3;

    v.erase(v.begin() + (q1 - 1)); // 1 + 1
    v.erase(v.begin() + (q2-1), v.begin() + (q3-1)); // 1+1, 1+3
    
    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
