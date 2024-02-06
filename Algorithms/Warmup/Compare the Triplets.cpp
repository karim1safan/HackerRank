#include <iostream>
using namespace std;

int main()
{

    int a[3], b[3];

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    int pointsA = 0, pointsB = 0;

    for(int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
            pointsA++;
        if(a[i] < b[i])
            pointsB++;
    }

    cout << pointsA << " " << pointsB << endl;

    return 0;
}
