#include "testlib.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    registerInteraction(argc, argv);
    int n = inf.readInt();
    inf.readSpace(); 
    int s = inf.readInt();
    inf.readSpace();
    int x = inf.readInt();
    inf.readEoln();
    cout.flush(); 
    
    int val[n], nxt[n];
    for(int i = 0; i < n; i++){
        val[i] = inf.readInt();
        inf.readSpace();
        nxt[i] = inf.readInt();
        inf.readEoln();
    }
    inf.readEof();

    cout << n << " " << s << " " << x << endl;
    // ouf.readEoln();
    int left = 5000;
    bool found = false;
    while(left > 0 && !found){
        left--;
        char c = ouf.readChar();
        if(c == '!'){
            int a = ouf.readInt(-1, 1000000000);
            tout << a << endl;
            ouf.readEoln();
            ouf.readEof();
            return 0;
        }else if(c == '?'){
            int i = ouf.readInt(1, n);
            ouf.readEoln();
            cout << val[i-1] << " " << nxt[i-1] << endl;
        }else{
            tout << -2 << endl;
            return 0;
            // quitf(_fail, "something went wrong");
        }
        // cout.flush();
    }
    tout << -2 << endl;
    return 0;
}