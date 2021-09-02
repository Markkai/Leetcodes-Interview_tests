#include <stdio.h>
#include <stdlib.h>

/*Float
int main(){

    float a, res;
    printf("Input 2.1F float num: ");
    scanf("%f", &a);
    res = (int)((a*10+5))/10;
    printf("%2.1f\n", res);
}
*/
/* Integer */
int main(){

    int a, rem;
    printf("Input a: ");
    scanf("%d", &a);
    rem = a%10;
    if(rem <=4)
        a = a-rem;
    else{
        a = a +(10-rem);
    }
    printf("%d\n",a);
}


/* 整數四捨五入
int main(){

    int a;
    printf("Input numb: ");
    scanf("%d", &a);
    int rem = a%10;

    if(rem <= 4){
        a  = a - rem;
        printf("%d\n", a);
    }
    else if(rem >=5){
        a += (10-rem);
        printf("%\n", a);
    }
}*/


/* 小數後一位4捨5入
int main()
{
    float s = 42.6;
    float res = ((int)(s*10 + 5))/10;

    printf("%3.1f", res);

    return 0;
}*/
