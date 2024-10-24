#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);
    int n = opt<int>("n");
    int rndn = opt<bool>("rndn");
    if (rndn) n = rnd.next(1, n);
    cout << n << endl;
    
    int minc = opt<int>("minc");
    int maxc = opt<int>("maxc");
    
    int k = opt<int>("k");
    int rndk = opt<bool>("rndk");
    if (rndk) k = rnd.next(-k, k);
    
    float balance = opt<float>("b");
    int rndbalance = opt<bool>("rndb");
    if (rndbalance) {
        if (balance > 0.5) balance = 1 - balance;
        balance = rnd.next(balance, 1 - balance);
    }
    
    vector<tuple<int, int, int>> tree(n, make_tuple(0, -1, -1));
    for (int i = 1; i < n; i++) {
        int curr = 0, prev, right;
        do {
            prev = curr;
            if (rnd.next(1.0) > balance) {
                right = 0;
                curr = get<1>(tree[curr]);
            }
            else {
                right = 1;
                curr = get<2>(tree[curr]);
            }
        } while (curr != -1);
        if (right) {
            get<2>(tree[prev]) = i;
        }
        else {
            get<1>(tree[prev]) = i;
        }
    }
    
    for (int i = 0; i < n; i++) {
        get<0>(tree[i]) = rnd.next(minc, maxc);
    }
    
    for (int i = 0; i < n; i++) {
        cout << get<0>(tree[i]) << " " << get<1>(tree[i]) << " " << get<2>(tree[i]) << endl;
    }
    
    cout << k << endl;
    
    return 0;
}