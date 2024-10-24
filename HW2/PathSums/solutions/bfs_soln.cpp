#include <iostream>
#include <tuple>
#include <vector>

using namespace std;
 
int n, k;
vector<tuple<int, int, int>> tree;

int bfs(int head, int sum) {
    if (head == -1) return 0;
    int value = get<0>(tree[head]);
    return (value == sum) + bfs(get<1>(tree[head]), sum - value) + bfs(get<2>(tree[head]), sum - value);
}

int main() {
    cin >> n;
    
    tree = vector<tuple<int, int, int>>(n);
    for (int i = 0; i < n; i++) {
        cin >> get<0>(tree[i]) >> get<1>(tree[i]) >> get<2>(tree[i]);
    }
    
    cin >> k;
    
    int num_sums = 0;
    for (int i = 0; i < n; i++) {
        num_sums += bfs(i, k);
    }
    cout << num_sums << endl;
    
    return 0;
}