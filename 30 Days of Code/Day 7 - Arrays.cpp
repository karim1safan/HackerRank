#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    
    int arr[n];
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    reverse(arr, arr + n);
    
    for (auto num : arr)
        cout << num << " ";
    
    return 0;
}