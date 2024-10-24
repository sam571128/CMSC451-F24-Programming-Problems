#include <iostream>
#include <algorithm>
#include <tuple>
#include <vector>

using namespace std;

int n, k;
vector<tuple<int, int, int>> tree;

int count_paths(int curr, int k, vector<int> sums) {
    if (curr == -1) return 0;
    int value = get<0>(tree[curr]);
    sums.push_back(k);
    rotate(lower_bound(sums.begin(), sums.end() - 1, k), sums.end() - 1, sums.end());
    int sums_starting_here = upper_bound(sums.begin(), sums.end(), value) - lower_bound(sums.begin(), sums.end(), value);
    for (auto &sum : sums) {
        sum -= value;
    }
    return sums_starting_here + count_paths(get<1>(tree[curr]), k, sums) + count_paths(get<2>(tree[curr]), k, sums);
}

int main() {
    cin >> n;
    
    tree = vector<tuple<int, int, int>>(n);
    for (int i = 0; i < n; i++) {
        cin >> get<0>(tree[i]) >> get<1>(tree[i]) >> get<2>(tree[i]);
    }
    
    cin >> k;
    
    vector<int> sums;
    cout << count_paths(0, k, sums) << endl;
    
    return 0;
}