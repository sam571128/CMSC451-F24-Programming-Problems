#include "testlib.h"

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    int pfound = ouf.readInt();
    int jfound = ans.readInt();
    if(pfound == -2) quitf(_wa, "couldn't guess the number with 50 questions");
    else if(pfound != jfound) quitf(_wa, "incorrect answer, expected: %d, actual: %d", jfound, pfound);
    quitf(_ok, "guessed the number with %d questions!", 2000);
}