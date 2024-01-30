#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    const int N = 5;
    int arr[N];
    
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    
    sort(arr, arr + N);
    
    long long sum = 0;

    for (int i = 0; i < N; i++)
        sum += arr[i];

    cout << sum - arr[N - 1] << " " << sum - arr[0] << endl;
    return 0;
}
