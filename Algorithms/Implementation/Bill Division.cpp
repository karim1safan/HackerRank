#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, k, b;
    cin >> n >> k;
    
    int arr[n];
    
    for(int i = 0; i < n; i++)
        cin >> arr[i];
        
    cin >> b;
    
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    
    
    int total = b - (sum - arr[k]) / 2;
    
    if(total == 0)
        cout << "Bon Appetit\n";
    else
        cout << total << endl;

    

    return 0;
}
