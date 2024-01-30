// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true
#include <iostream>
#include<iomanip>
#include <algorithm>
#include<cmath>
#include<string>
typedef long long ll;
using namespace std;

int main() {

    string s;
    cin >> s;

    for(int i = 0; i < (int)s.size(); ++i){
        if(s[i] == ',')
            cout << "\n";
        else
            cout << s[i];
    }
    return 0;
}
