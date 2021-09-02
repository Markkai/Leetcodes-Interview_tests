#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;
    printf("Find primes: ");
    scanf("%d", &a);
    b=0;
    for(int i=a; i>1; i--){
        c=0;
        for(int j=2; j<=a; j++){
            if(i%j == 0){
                c++;
                if(i==j && c==1){
                    printf("%3d", i);
                    b++;
                }
            }
        }
    }
    printf("\nPrime counts: %d\n", b);
}

/* Check prime
int main(){

    printf("Enter a number check prime: ");
    int n,c;
    scanf("%d", &n);

    for(c=2; c<=n/2; c++){
        if(n%c == 0){
            printf("%d is not prime\n", n);
            break;
        }
    }
    if(c == (n/2+1))
        printf("%d is a prime\n",n);

    system("pause");
    return 0;
}*/




/* Find primes in num
int main(){
    int a,b,c,i;
    b=0;
    scanf("%d",&a);
    for(a;a>1;a--){
        c=0;
        for(i=2;i<=a;i++){
            if(a%i==0){
                c++;
                if(a==i&&c==1){
                    printf("%d ",a);
                    b++;
                }
            }
        }
    }
    printf("\n總共質數為：%d",b);
    return 0;
}

*/
