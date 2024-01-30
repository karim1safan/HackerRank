#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int arr[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int right = 0, left = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                left += arr[i][j];
            if (j == n - i - 1)
                right += arr[i][j];
        }
    }

    cout << abs(right - left) << endl;

    return 0;
}
