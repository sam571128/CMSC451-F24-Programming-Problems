#include "testlib.h"
#include <vector>
#include <set>

struct edge{
    int type, i, j, x;
};

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    // 這裡 checker 不需要用到 inf (測資) 的資料
    int n = inf.readInt(); inf.readSpace();
    int m = inf.readInt(); inf.readEoln();

    int val[n+1];
    for(int i = 1; i <= n; i++){
        val[i] = inf.readInt();
        if(i != n) inf.readSpace();
        else inf.readEoln();
    }

    std::vector<edge> rules;
    for(int i = 0; i < m; i++){
        int type = inf.readInt(); inf.readSpace();
        if (type == 1) {
            int i = inf.readInt(); inf.readSpace();
            int j = inf.readInt(); inf.readSpace();
            int x = inf.readInt();
            rules.push_back({type,i,j,x});
        } else {
            int i = inf.readInt(); inf.readSpace();
            int j = inf.readInt(); 
            rules.push_back({type,i,j,0});
        }
        inf.readEoln();
    }

    long long pans = ouf.readLong(0, (long long)1e18, "maximum prize"); ouf.readEoln();
    int pcnt = ouf.readInt(0, 100000, "number of balls"); ouf.readEoln();
    std::set<int> pballs;
    for(int i = 0; i < pcnt; i++){
        int x = ouf.readInt(1, n, "ball x");
        if(i != pcnt-1) ouf.readSpace();
        pballs.insert(x);
    }
    long long jans = ans.readLong();
    if (pans != jans)
        quitf(_wa, "The maximum prize is wrong: expected = %d, found = %d", jans, pans);

    long long sum = 0;
    for(auto x : pballs)
        sum += val[x];

    for(auto [type, i, j, x] : rules){
        if(type == 1){
            if(pballs.count(i) && !pballs.count(j))
                sum -= x;
        } else {
            if(pballs.count(i) && !pballs.count(j))
                quitf(_wa, "Found ball %d but not ball %d in correct answer", i, j);
        }
    }

    sum = std::max(sum, 0ll);

    if (sum != pans)
        quitf(_wa, "The set of balls picked up has prize %d, which is different from the given %d", sum, pans);

    if (sum < jans){
        quitf(_fail, "The answer %d is better than correct answer %d", sum, jans);
    } else if(sum > jans){
        quitf(_wa, "The answer %d is different from correct answer %d", sum, jans);
    }

    quitf(_ok, "Correct");
}
