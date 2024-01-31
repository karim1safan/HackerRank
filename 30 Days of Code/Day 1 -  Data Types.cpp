#include <iostream>

using namespace std;

int main() {

    int a; double b; string s;
    cin >> a >> b;
    
    getline(cin, s);
    getline(cin, s);
    
    cout << a+4 << endl;
    printf("%.1f\n", b + 4.0);
    cout << "HackerRank " << s << endl;
    
    return 0;
}
