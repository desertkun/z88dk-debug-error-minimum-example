#include "header.h"
#include <stdio.h>

static int haha55 = 22;

void check(const char* test, int* kek, int value)
{
   static int wow = 12;
   printf("%s\n", test);
}

int main()
{
    int v = 20;
    check("hello!", &v, 50);
    haha55 = 55;
    int h = haha(13, 2);
    printf("result is: %d, supposed to be: 30\n", h);
    return h;
}
