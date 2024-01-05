// Problem Link: https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> v;
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < t; i++)
    {
        cout << v[i] << " ";
    } 
    return 0;
}
