#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  
    int t;
    cin >> t;
    while (t--)
    {
        string s, even_indexed  = "", odd_indexed = "";
        cin >> s; 
        
        // 012345
        // Hacker   -> sz : 6 
        // Hce akr 
        
        int sz = s.size()-1;
        
        for (int i = 0; i <= sz; i++)
        {
            if(i%2 == 0)
                even_indexed += s[i]; // H
            else if(i%2 != 0)
                odd_indexed += s[i]; // a
        }
        
        cout << even_indexed << " " << odd_indexed << endl;
    }
    
    return 0;
}

// Hacker
// 012345
// Hce akr
