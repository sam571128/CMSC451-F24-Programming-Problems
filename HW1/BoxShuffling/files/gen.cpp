#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int n = opt<int>("n");
    int q = opt<int>("q");
    int rndn = opt<bool>("rndn");
    int rndq = opt<bool>("rndq");
    if(rndn) n = rnd.next(1,n);
    if(rndq) q = rnd.next(1,q);

    cout << n << "\n";
    for(int i = 1; i <= n; i++){
        cout << rnd.next(1,n) << " \n"[i == n];
    }

    for(int i = 1; i <= n; i++){
        cout << rnd.next(1,n) << " \n"[i == n];
    }

    cout << q << "\n";
    for(int i = 1; i <= q; i++){
        int l1, r1, l2, r2;
        int tmp = rnd.next(1,5);
        l1 = rnd.next(1,n);
        r1 = rnd.next(1,n);
        if(l1 > r1) swap(l1, r1);
        if(tmp != 1){
            l2 = rnd.next(1, n - (r1 - l1));
            r2 = l2 + (r1 - l1);
        } else {
            l2 = rnd.next(1,n);
            r2 = rnd.next(1,n);
            if(l2 > r2) swap(l2, r2);
        }
        cout << l1 << " " << r1 << " " << l2 << " " << r2 << "\n";
    }
}