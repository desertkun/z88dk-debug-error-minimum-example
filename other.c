static const char* haha2(int a, int b, int c) __z88dk_callee
{
    static int kek = 20;
    a += 2;
    b -= 2;
    return "Done!";
}

int haha(int a, int b) __z88dk_callee
{
    a = a << 1;
    haha2(0, b, a);
    return a + b * 2;	
}
