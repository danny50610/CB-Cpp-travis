#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int addNumber(int a, int b) {
    return a + b;
}

#ifndef TEST
int main() {
    printf("Hello, world\n");
    return 0;
}
#else
int main() {
    assert(addNumber(5, 2) == 7);
    exit(0);
}
#endif // TEST

