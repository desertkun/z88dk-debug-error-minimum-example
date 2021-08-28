#include "header.h"

static void haha2(int a, int b, int c) __z88dk_callee
{
    a += 2;
    b -= 2;
}

int haha(int a, int b) __z88dk_callee
{
    a = a << 1;
    haha2(a, b, 0);
    return a + b * 2;	
}
