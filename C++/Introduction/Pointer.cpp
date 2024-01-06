// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem?isFullScreen=true

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
void sum_sub(int a,int b){
    cout << a+b << "\n";
    cout << abs(a-b) << "\n";
}
int main() {

    int a, b;
    cin >> a >> b;
    sum_sub(a, b);
    return 0;
}
