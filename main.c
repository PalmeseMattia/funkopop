/* Simple implementation of a list of functions in C.
 * Can python do this?
 */
#include<stdio.h>

void foo(void)
{
    printf("foo\n");
}

void bar(void)
{
    printf("bar\n");
}

typedef void(*func)(void);
func funcs[] = {foo, bar};

int main(void)
{
    for(int i = 0; i < (sizeof(funcs)/sizeof(func)); i++){
        funcs[i]();
    }
}
