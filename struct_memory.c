#include <stdio.h>
#include <stdlib.h>

struct A{
    int a;
    double b;
    char c;
};

struct B{
    double b;
    char c;
    int a;
};

struct C{
    int a;
    char c;
    double b;
};

struct D{
    double b;
    char c[13];
    int a;
};

union E{
    double b;
    char c[3];
    int a;
};

int main()
{
    struct A a;
    struct B b;
    struct C c;
    struct D d;
    union E e;
    printf("A = %d\n", sizeof(a));//結果：A = 24
    printf("B = %d\n", sizeof(b));//結果：B = 16
    printf("C = %d\n", sizeof(c));//結果：C = 16
    printf("D = %d\n", sizeof(d));//結果：D = 32
    printf("E = %d\n", sizeof(e));//結果：E = 8
    return 0;
}
