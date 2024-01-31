#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("%0.6f\n", (double)pos / n);
    printf("%0.6f\n", (double)neg / n);
    printf("%0.6f\n", (double)zero / n);

    return 0;
}