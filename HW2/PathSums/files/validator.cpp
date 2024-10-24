#include "testlib.h"

#include <vector>

int main(int argc, char *argv[]) {
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 1'000, "n");
    inf.readEoln();
    
    std::vector<int> parent_counts(n, 0);
    
    for (int i = 0; i < n; i++) {
        inf.readInt(-1'000, 1'000, "c");
        inf.readSpace();
        int l = inf.readInt(-1, n - 1, "l");
        if (l != -1) parent_counts[l]++;
        inf.readSpace();
        int r = inf.readInt(-1, n - 1, "r");
        if (r != -1) parent_counts[r]++;
        inf.readEoln();
    }
    
    ensure(parent_counts[0] == 0);
    for (int i = 1; i < n; i++) {
        ensure(parent_counts[i] == 1);
    }
    
    inf.readInt(-1'000'000, 1'000'000, "k");
    inf.readEoln();
    inf.readEof();
}