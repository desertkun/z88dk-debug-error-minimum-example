static const char* haha2(int a, int b, int c) __z88dk_callee
{
    static int kek = 20;
    a += 2;
    b -= 2;
    return "Done!";
}

static int offset_function2(int a)
{
    return a + 10;
}

static int offset_function(int a) __z88dk_params_offset(4)
{
    int k = a - 2;
    return offset_function2(k) + 5;
}

static int offset_function_wrapper(int a) __naked
{
#asm
    ld hl, $44
    push hl
    call _offset_function
    pop hl
#endasm
}

int haha(int a, int b) __z88dk_callee
{
    a = a << 1;

    haha2(0, b, a);
    haha2(0, b, a);
    haha2(0, b, a);
    haha2(0, b, a);

    a += 10;


    return a + b * 2 + offset_function_wrapper(10);	
}
