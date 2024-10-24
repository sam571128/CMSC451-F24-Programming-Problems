#include "testlib.h"

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, 200000, "n");
    inf.readEoln();
    for(int i = 1; i <= n; i++){
        int x = inf.readInt(1, n, "ai");
        (i == n ? inf.readEoln() : inf.readSpace());
    }
    for(int i = 1; i <= n; i++){
        int x = inf.readInt(1, n, "bi");
        (i == n ? inf.readEoln() : inf.readSpace());
    }
    int q = inf.readInt(1, 200000, "q");
    inf.readEoln();

    for(int i = 1; i <= q; i++){
        int l1 = inf.readInt(1, n, "l1"); inf.readSpace();
        int r1 = inf.readInt(l1, n, "r1"); inf.readSpace();
        int l2 = inf.readInt(1, n, "l2"); inf.readSpace();
        int r2 = inf.readInt(l2, n, "r2");
        inf.readEoln();
    }
    inf.readEof();
}