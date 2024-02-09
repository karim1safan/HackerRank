#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, key;
    cin >> key >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++)
        cin >> v.at(i);
    
    sort(v.begin(), v.end());
    
    int idx = -1;
    for(int i = 0; i < v.size(); i++){
        if(key == v[i]){
            idx = i;
        }
    }
    
    cout << idx << endl;
    
}