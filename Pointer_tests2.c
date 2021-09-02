#include <stdio.h>

void f(int *p, int *q){
	p = q;
	*p = 2;
}
void print(int ar[]){
    printf("%d ", sizeof(ar));
    printf("%d", sizeof(ar[0]));
}

int main()
{
   /* 01
    char i[] = "Hello";
    char j[] = {'H','e','l','l','o'};
    char *p = 1;
    double *s;
    int n = 10;
    printf("%d, %d, %d, %d", sizeof(i), sizeof(j), sizeof(p), sizeof(s), sizeof(n));
*/

    /* 02
    int a[] ={1,2,3,4,5,6};
	int *ptr = &a+1;
	int *ptr2 = a+1;
	printf("%d  %d  %d\n", sizeof(a), &a, &a+1);
	printf("%d   %d", *(ptr-1), *ptr2);
*/

    /* 03  Important
    int arr[] = {10,20,30,40,50};
	int *ptr1 = arr;
	int *ptr2 = arr + 5;
	printf("%d  %d\n", ptr1, ptr2);
	printf("%d  %d\n", (char*)ptr1, (char*)ptr2);
	printf("%d\n", (ptr2-ptr1));                //兩指標之間距離
	printf("%d\n", (char*)ptr2 - (char*)ptr1);  //兩指標address差值

	printf("%d\n", *((char*)ptr1));
	printf("%d\n", *(ptr1+4));          //原型態為int*==> +4*sizeof(int)
	printf("%d\n", *((char*)ptr1+4));  //將addres轉型成char*==> +4*sizeof(char)
*/

    /* 04
    int arr1[] = {10,20};
	int arr2[] = {10,20};
	int arr3[] = {10,20};
	int *p = arr1;
	int *q = arr2;
	int *r = arr3;
	++*p;
	*q++;
	*++r;
	printf("%d %d %d\n", arr1[0], arr1[1], *p);
	printf("%d %d %d\n", arr2[0], arr2[1], *q);
	printf("%d %d %d\n", arr3[0], arr3[1], *r);
*/

    /* 05
    int i=0, j=1;
    f(&i, &j);
	printf("%d %d\n", i, j);
*/


    /* 06
    char s[]="0113256";

	char *p = s;
    printf("%c  %p\n", *p, p);
	printf("%c  %p\n", *p++, p);
	printf("%c  %p\n", *(p++), p);
	printf("%c  %p\n", (*p)++, p);
	printf("%c  %p\n", *p, p);
	printf("%c  %p\n", *++p, p);
	printf("%c  %p\n", *(++p), p);
	printf("%c  %p\n", ++*p, p);
	printf("%c  %p\n", ++(*p), p);
	printf("\n");
	printf("%s  %p\n",s, s);
*/

    /* 07
    int ref[]={8,4,0,2};
	int *ptr;
	int index;
	for(index=0, ptr=ref; index<2; index++,ptr++)
		printf("%d %d\n", ref[index], *ptr);
	(*ptr++);
	printf("%d %d\n", ref[index], *ptr);
*/



    return 0;
}
