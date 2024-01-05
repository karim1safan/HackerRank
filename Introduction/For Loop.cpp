// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
#include <iostream>
#include<iomanip>
#include <algorithm>
#include<cmath>
#include<string>
typedef long long ll;
using namespace std;

int main() {

    int a,b; cin >> a >> b;
    string represent [10] {"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
    for(int i = a; i <= b; ++i){
        if(i > 9){
            if(i%2 == 0)
                cout << "even\n";
            else
                cout << "odd\n";
        }
        else
            cout << represent[i] << "\n";
    }
    return 0;
}
