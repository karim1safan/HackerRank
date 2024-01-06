// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
#include <iostream>
#include<iomanip>
#include <algorithm>
#include<cmath>
#include<string>
typedef long long ll;
using namespace std;

void max(int a,int b,int c,int d){
    cout << max({a,b,c,d});
}

int main() {

    int a,b,c,d;
    cin >> a >> b >> c >> d;
    max(a,b,c,d);
    return 0;
}
