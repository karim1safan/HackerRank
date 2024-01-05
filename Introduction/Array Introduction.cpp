// Problem Link: https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
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

    int n, arr[10000];
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    for(int i = 0; i < n; ++i)
        cout << arr[n-i-1] << " ";

    return 0;
}
