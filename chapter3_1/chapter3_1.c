#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

void ex4(void)
{
    int year;
    printf("Give a year: \n");
    scanf("%d", &year);
    if (year % 2 == 0)
        printf("the year is even\n");
    if (year % 2 == 1)
        printf("the year is odd\n");
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("it's a leap year!\n");
    else
        printf("it's not a leap year\n");
}

void ex5(void)
{
    char a = 11; // ascii for 11
    char b = 9;
    char c = a & b; // binary and on each bit
    char d = 12;
    char e = a && b; // logical and: if both are not 0, result is 1
    printf("a:%d b:%d c:%d d:%d e:%d\n", a, b, c, d, e);
}

void ex6(void)
{
    char a = 8;
    char b = 4;
    char c = a | b;
    char d = 12;
    char e = a || b;
    printf("a:%d b:%d c:%d d:%d e:%d\n", a, b, c, d, e);
}

void ex7(void)
{
    /* x = 0b01101001 = 105 */
    unsigned char x = 105;
    /* Μετατροπή %hhu -> short short unsigned */
    printf("x:      %hhu\n", x);
    /* x<<1 = 0b11010010 = 210 */
    printf("x<<1:   %hhu\n", x << 1);
    /* x>>1 = 0b00110100 = 52 */
    printf("x>>1:   %hhu\n", x >> 1);
    /* y = 0b01101001 = 105 */
    char y = 105;
    /* Μετατροπή %hhd -> short short decimal */
    printf("y:      %hhd\n", y);
    /* y<<1 = 0b11010010 = -46 */
    // it's risky, it  might go to negative instead of dividing by 2
    printf("y<<1:   %hhd\n", y << 1);
    /* y>>1 = 0b00110100 = 52 */
    printf("y>>1:   %hhd\n", y >> 1);
}

void ex8(void)
{
    int a, b, c;
    // 1A
    a = 10;
    b = 20;
    a += 1;
    b -= 1;
    c = a * b;
    printf("1A a=%d b=%d c=%d\n", a, b, c);
    // 1B equal to 1A
    a = 10;
    b = 20;
    c = ++a * --b;
    printf("1B a=%d b=%d c=%d\n", a, b, c);
    // 2A
    a = 10;
    b = 20;
    a += 1;
    c = a * b;
    b -= 1;
    printf("2A a=%d b=%d c=%d\n", a, b, c);
    // 2B equal to 2A
    a = 10;
    b = 20;
    c = ++a * b--;
    printf("2B a=%d b=%d c=%d\n", a, b, c);
    // 3A
    a = 10;
    b = 20;
    c = a * b;
    a += 1;
    b -= 1;
    printf("3A a=%d b=%d c=%d\n", a, b, c);
    // 3B equal to 3A
    a = 10;
    b = 20;
    c = a++ * b--;
    printf("3B a=%d b=%d c=%d\n", a, b, c);
}

void ex9(void)
{
    int z1, z2;
    srand(time(NULL));
    z1 = rand() % 6 + 1;
    z2 = rand() % 6 + 1;
    printf("First roll of the dice ->       %d:%d\n", z1, z2);
    z1 = rand() % 6 + 1;
    z2 = rand() % 6 + 1;
    printf("Second roll of the dice ->      %d:%d\n", z1, z2);
    z1 = rand() % 6 + 1;
    z2 = rand() % 6 + 1;
    printf("Third roll of the dice ->       %d:%d\n", z1, z2);
}

void ex10(void)
{
    printf("%llu\n", 1ULL << 36);
    printf("%llu\n", 1 << 36);
}

void ex11(void)
{
    // 00011110000100001100100000000011 ->
    // 504416259 -> 30 16 200 3
    // 11111111111111111111111111111111 ->
    // 4294967295 -> 255 255 255 255
    unsigned int pixel;
    printf("Give a pixel:\n");
    scanf("%ud", &pixel);
    unsigned char alpha, red, green, blue;
    blue = pixel & 255;
    green = (pixel & 65280) >> 8;
    red = (pixel & 16711680) >> 16;
    alpha = (pixel & 4278190080) >> 24;
    printf("alpha: %d\n", alpha);
    printf("red: %d\n", red);
    printf("green: %d\n", green);
    printf("blue: %d\n", blue);
}

int main(void)
{
    // printf("-----Example 1-----\n");
    // ex1();
    // printf("-----Example 2-----\n");
    // ex2();
    // printf("-----Example 3-----\n");
    // ex3();
    // printf("-----Example 4-----\n");
    // ex4();
    // printf("-----Example 5-----\n");
    // ex5();
    // printf("-----Example 6-----\n");
    // ex6();
    // printf("-----Example 7-----\n");
    // ex7();
    // printf("-----Example 8-----\n");
    // ex8();
    // printf("-----Example 9-----\n");
    // ex9();
    // printf("-----Example 10-----\n");
    // ex10();
    printf("-----Example 11-----\n");
    ex11();
    return 0;
}