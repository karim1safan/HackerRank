// Problem Link: https://www.hackerrank.com/challenges/cpp-sets/problem?isFullScreen=true
#include <cmath>
#include <cstdio>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    int q;
    cin >> q;
    set<int> se;
    while(q--)
    {
        int y, x;
        cin >> y >> x;
        if(y == 1){
            se.insert(x);
        }else if(y == 2){
            se.erase(x);
        }else if(y == 3){
            auto found = se.find(x);
            if(found != se.end()){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
    return 0;
}
