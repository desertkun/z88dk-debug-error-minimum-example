#include "header.h"
#include <stdio.h>

struct child_t {
  int c;
};

struct test_t {
  int vv1;
  char vv2;
  struct child_t child;
};

static int haha222 = 222;
static int haha55[2] = {22, 11};
struct test_t v;

char* check(const char* test, struct test_t* kek, int value, int[] arr)
{
   static int wow = 12;
   printf("%s %d\n", test, kek->vv1);
   return "success";
}

int main()
{
    v.child.c = 54;
    v.vv1 = 20;
    check("hello!", &v, 50, haha55);
    haha55[1] = 55;
    int h = haha(13, 2);
    printf("result is: %d, supposed to be: 30\n", h);
    return h;
}
