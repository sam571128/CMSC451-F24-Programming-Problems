#include "testlib.h"
#include <iostream>
#include <vector>
#include <map>
#include <numeric>

using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int n = opt<int>("n");
    int rndn = opt<bool>("rndn");

    if(rndn) n = rnd.next(1,n);

    int x = rnd.next(1, (int) 1e9);

    vector<int> v(n), val(n+1);
    map<int,int> nxt;
    iota(v.begin(), v.end(), 0);
    shuffle(v.begin(), v.end());
    v.push_back(-2);
    cout << n << " " << v[0]+1 << " " << x << "\n";

    set<int> st;
    while(st.size() < n){
        st.insert(rnd.next(1,(int)1e9));
    }

    for(int i = 0; i < n; i++){
        nxt[v[i]+1] = v[i+1]+1;
        val[v[i]+1] = *st.begin();
        st.erase(st.begin());
    }

    for(int i = 1; i <= n; i++){
        cout << val[i] << " " << nxt[i] << "\n";
    }

}