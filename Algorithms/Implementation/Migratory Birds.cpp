#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    const int MAX = 1e5;
    int freq[MAX + 1] {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    int mx = 0, idx = 0;
    for(int i = 1; i <= 5; i++){
        if(freq[i] > mx){
			mx = freq[i];
			idx = i;
        }

    }
    cout << idx << endl;

    return 0;
}
