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

    int arr[n];
    for(int i = 1; i <= n; i++){
        arr[i-1] = rnd.next(1,n);
        cout << arr[i-1] << " \n"[i == n];
    }
    int l = rnd.next(1,n);
    int r = rnd.next(1,n);
    int sum = 0;
    if(l > r) swap(l,r);
    for(int i = 1; i <= r-l+1; i++)
        sum += arr[i-1];

    shuffle(arr, arr+r-l+1);

    for(int i = 1; i <= n; i++){
        if(i >= l && i < r){
            cout << sum / (r - l + 1) << " \n"[i == n];
        } else if (i == r) {
            cout << sum / (r - l + 1) + sum % (r - l + 1) << " \n"[i == n];
        } else {
            cout << rnd.next(1,n) << " \n"[i == n];
        }
    }

    cout << q << "\n";
    for(int i = 1; i <= q; i++){
        int l1, r1, l2, r2;
        int tmp = rnd.next(1,5);
        l1 = rnd.next(1,n);
        r1 = rnd.next(1,n);
        if(l1 > r1) swap(l1, r1);
        if(tmp == 5){
            l1 = 1, r1 = r-l+1;
            l2 = l, r2 = r;
        } else if (tmp != 1){
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