#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);
    int n = opt<int>("n");
    cout << n << "\n";
    for(int i = 0; i < n; i++){
    	cout << rnd.next(INT_MIN, INT_MAX) << " \n"[i == n-1];
    }
}