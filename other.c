#include "header.h"

static void haha2(int a, int b, int c) __z88dk_callee
{
    a += 2;
    b -= 2;
}

#define do_it_twice(a, b, c) \
    haha2(a, b, c);          \
    haha2(c, b, a);

int haha(int a, int b) __z88dk_callee
{
    a = a << 1;
    do_it_twice(a, b, 0);
    return a + b * 2;	
}
