#include <stdio.h>
#include <stdlib.h>

int addNumber(int a, int b) {
    return a + b;
}

#ifndef TEST
int main() {
    printf("Hello, world\n");
    printf("%d\n", addNumber(5, 2));
    return 0;
}
#endif
