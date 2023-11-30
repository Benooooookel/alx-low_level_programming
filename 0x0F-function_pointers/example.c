#include <stdio.h>

void add(int a, int b)
{
    int get = a + b;
    printf("%d\n", get);
    printf("%p\n", add);
}
int main(void)
{
    void (*fun)(int, int) = add;

    fun(3, 5);

    return (0);
} 
