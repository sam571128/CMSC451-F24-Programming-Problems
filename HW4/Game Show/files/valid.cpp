#include "testlib.h"
#include <vector>

struct edge{
    int type, i, j, x;
};

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, 100000); inf.readSpace();
    int m = inf.readInt(1, 100000); inf.readEoln();

    int val[n+1];
    for(int i = 1; i <= n; i++){
        val[i] = inf.readInt((int)-1e9, (int)1e9);
        if(i != n) inf.readSpace();
        else inf.readEoln();
    }

    std::vector<edge> rules;
    for(int i = 0; i < m; i++){
        int type = inf.readInt(1, 2); inf.readSpace();
        if (type == 1) {
            int i = inf.readInt(1, n); inf.readSpace();
            int j = inf.readInt(1, n); inf.readSpace();
            int x = inf.readInt(1, (int)1e9);
            ensure(i != j);
            rules.push_back({type,i,j,x});
        } else {
            int i = inf.readInt(1, n); inf.readSpace();
            int j = inf.readInt(1, n);
            ensure(i != j); 
            rules.push_back({type,i,j,0});
        }
        inf.readEoln();
    }
    inf.readEof();
}
