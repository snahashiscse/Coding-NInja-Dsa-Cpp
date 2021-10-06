#include<bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int n) {
    unordered_map<int, int> m;

    for (int i = 0; i < n; ++i)
    {
        m[arr[i]]++;
    }
    unordered_map<int, int> :: iterator it;

    for (it = m.begin(); it != m.end(); it++) {
        if (it->second > 1)
        {
            return it->first;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}
