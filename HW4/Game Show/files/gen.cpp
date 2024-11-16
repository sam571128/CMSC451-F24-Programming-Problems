#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int n = opt<int>("n");
    int m = opt<int>("m");
    int debug = opt<bool>("debug");
    int rndn = opt<bool>("rndn");
    int rndm = opt<bool>("rndm");

    int mxv = 1e9;

    if(debug) mxv = 20, n = 10, m = 10;
    if(rndn) n = rnd.next(2, n);
    if(rndm) m = rnd.next(1, m);

    cout << n << " " << m << "\n";

    for(int i = 1; i <= n; i++){
        cout << rnd.next(-mxv, mxv) << " \n"[i==n];
    }

    for(int i = 1; i <= m; i++){
        int type = rnd.next(1, 2);
        if (type == 1) {
            int i = rnd.next(1,n);
            int j = rnd.next(1,n);
            while(i == j) j = rnd.next(1, n);
            int x = rnd.next(1, mxv);
            cout << type << " " << i << " " << j << " " << x << "\n";
        } else {
            int i = rnd.next(1,n);
            int j = rnd.next(1,n);
            while(i == j) j = rnd.next(1, n);
            cout << type << " " << i << " " << j << "\n";
        }
    }
}
