#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);

    int n = inf.readInt(1, 100000, "n");
    inf.readEoln();
    vector<int> counts;
    for (size_t i=0; i < n-1; ++i) {
       int c_i = inf.readInt(0, 1000000, "c_i");
       inf.readSpace();
    }
    int c_i = inf.readInt(0, 1000000000, "c_i");
    inf.readEoln();

    int m = inf.readInt(0, 10000000, "m");
    inf.readEoln();
    for (size_t i=0; i < m; ++i) {
       int u = inf.readInt(0, n-1, "u");
       inf.readSpace();
       int v = inf.readInt(0, n-1, "v");
       inf.readEoln();
    }
    inf.readEof();
}