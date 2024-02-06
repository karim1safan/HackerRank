#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int q;
    cin >> q;

    while(q--){
        int x, y, z;
        cin >> x >> y >> z; 

        if(abs(z-x) > abs(z-y)) 
            cout << "Cat B\n";
        else if(abs(z-x) < abs(z-y)) 
            cout << "Cat A\n";
        else if(abs(z-x) == abs(z-y)) 
            cout << "Mouse C\n";

    }
    return 0;
}
