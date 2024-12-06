#include <stdio.h>

void ex1(void)
{
    int a, b;
    b = a = 5;
    ++a;
    ++b;
    printf("ex1: a=%d, b=%d\n", a, b);
}

void ex2(void)
{
    int a, b, c, d;
    a = b = 5;
    c = --b;
    d = a--;
    printf("ex2: a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
}

void ex3(void)
{
    int a, b;
    a = b = 5;
    printf("ex3:\n++a = %d\n", ++a);
    printf("b++ = %d\n", b++);
    printf("a = %d b = %d\n", a, b);
}

// ex4

int main(void)
{
    ex1();
    ex2();
    ex3();
    return 0;
}