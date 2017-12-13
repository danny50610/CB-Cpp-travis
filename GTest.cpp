#include <stdio.h>
#include <assert.h>

int addNumber(int a, int b) {
    return a + b;
}

int main()
{
    #ifdef TEST
        assert(addNumber(5, 2) == 7);
        exit(0);
    #endif // TEST

    printf("Hello, world\n");
    return 0;
}
