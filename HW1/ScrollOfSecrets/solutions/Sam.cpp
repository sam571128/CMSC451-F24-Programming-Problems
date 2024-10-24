#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define int long long

using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

pair<int,int> ask(int i){
    cout << "? " << i << endl;
    int v, nxt;
    cin >> v >> nxt;
    return {v,nxt};
}

signed main(){
    fastio
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> v(1,s);
    for(int i = 1; i <= n; i++) if(i != s) v.push_back(i);
    shuffle(v.begin()+1, v.end(), rng);
    
    int mx = -1e18, idx = -1;
    int ans = 0;
    for(int i = 1; i <= min(999ll, n); i++){
        auto [val, nxt] = ask(v[i-1]);
        if(i == 1) ans = val;
        if(val > mx && val < x){
            mx = val;
            idx = v[i-1];
        }
    }
    int now = idx;

    for(int i = 0; i < 1000; i++){
        if(now == -1) break;
        auto [val, nxt] = ask(now);
        if(val >= x){
            cout << "! " << val << endl;
            return 0;
        }
        else mx = val, now = nxt;
    }

    if(ans >= x)
        cout << "! " << ans << endl;
    else
        cout << "! " << -1 << endl;
}