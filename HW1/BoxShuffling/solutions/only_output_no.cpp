#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define int long long

using namespace std;

const int N = 2e5+5;
int a[N], b[N], sumA[N], sumB[N], xorA[N], xorB[N];
map<int,int> id;

mt19937 rng(time(NULL));

signed main(){
    fastio
    int n,q;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(!id[a[i]]) id[a[i]] = rng();
        a[i] = id[a[i]];
        sumA[i] = sumA[i-1] + a[i];
        // xorA[i] = xorA[i-1] ^ a[i];
    }


    for(int i = 1; i <= n; i++){
        cin >> b[i];
        if(!id[b[i]]) id[b[i]] = rng();
        b[i] = id[b[i]];
        sumB[i] = sumB[i-1] + b[i];
        // xorB[i] = xorB[i-1] ^ b[i];
    }

    cin >> q;

    while(q--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        // bool checkLen = ((b-a) == (d-c));
        // bool checkXor = ((xorA[b] ^ xorA[a-1]) == (xorB[d] ^ xorB[c-1]));
        // bool checkSum = ((sumA[b] - sumA[a-1]) == (sumB[d] - sumB[c-1]));
        cout << "No\n";
    }
} 