#include "header.h"
#include <stdio.h>

void check(const char* test, int* kek)
{
   printf("%s\n", test);
}

int main()
{
    int v = 20;
    check("hello!", &v);
    int h = haha(13, 2);
    printf("result is: %d, supposed to be: 30\n", h);
    return h;
}
