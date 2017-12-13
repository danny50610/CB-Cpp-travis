#include "GTest.h"
#include <assert.h>

#ifdef TEST
int main() {
    assert(addNumber(5, 2) == 7);
    return 0;
}
#endif
