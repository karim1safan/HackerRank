#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m , b;
    cin >> b >> n >> m;

    int keybords[n], drives[m];
    for(int i = 0; i < n; i++)
        cin >> keybords[i];
    for(int i = 0; i < m; i++)
        cin >> drives[i];

    sort(keybords, keybords + n);
    sort(drives, drives + m);

    int mx = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int total = keybords[i] + drives[j];

            if(total <= b)
                mx = max(mx, total);
        }
    }

    cout << mx << endl;

    return 0;
}
