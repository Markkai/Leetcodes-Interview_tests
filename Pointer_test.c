#include <stdio.h>

#define R 2
#define C 3

int main()
{
    int *p1[R];
    int *p2[R][C];   // 表示p2指向第Row，長度Col的array, size= 3*4
    int (*p3)[R][C]; // 表示整個2D-array的size
    int s[R][C];
    printf("sizeof(*p1)= %d\n", sizeof(*p1));
    printf("sizeof(*p2)= %d\n", sizeof(*p2));
    printf("sizeof(*p3)= %d\n", sizeof(*p3));
    printf("sizeof(p3)= %d\n",  sizeof(p3));
    printf("sizeof(s) =  %d\n", sizeof(s));


    printf("\n");
    int B[R][C] = {{2,4,5}, {1,7,8}, {5,6,4}};
    printf("B = %d\n", B);
    printf("*B = %d\n", *B);
    printf("B[0]= %d\n", B[0]);
    printf("**B= %d\n", **B);
    printf("*(*B+1)= %d\n", *(*B+1));
    return 0;
}
