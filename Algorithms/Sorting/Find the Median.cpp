#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++){
        cin >> v.at(i);
    }
    
    sort(v.begin(), v.end());

    cout << v[v.size()/2] << endl;

}


// 0 1 2 4 6 5 3
// 0 1 2 3 4 5 6 -> size = 7

// 0 1 2 4 6 5 3 7 
// 0 1 2 3 4 5 6 7 -> size = 8