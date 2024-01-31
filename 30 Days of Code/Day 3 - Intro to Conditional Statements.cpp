#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n%2 != 0)
        cout << "Weird\n";
    else if (n%2 == 0)
    {
        if ( (2 <= n && n <= 5) || n > 20)
            cout << "Not Weird\n";
        else if (6 <= n && n <= 20)
            cout << "Weird\n";
    }
	
    return 0;
}
