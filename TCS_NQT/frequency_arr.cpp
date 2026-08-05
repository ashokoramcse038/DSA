#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
        freq[arr[i]]++;

    vector<pair<int, int>> v;

    // {frequency, element}
    for (auto x : freq) {
        v.push_back({x.second, x.first});
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    cout << 2 << endl;

    for (int i = 0; i < 2 && i < v.size(); i++) {
        cout << v[i].second << " ";
    }

    return 0;
}