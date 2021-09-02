#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j,n;
    printf("Input hight (odd num): ");
    scanf("%d", &n);
    for(i=1; i<=n/2+1; i++){
        for(j=1; j<=n/2+i; j++){
            if(j >= n/2-i+2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=n/2; i>=1; i--){
        for(j=1; j<=n/2+i; j++){
            if(j >= n/2-i+2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


/*列印菱形圖案
int main (void)
{
	int n,j,i;                              // i為row數,j為col數
	printf("（n為奇數）輸入圖案高度n:\n");
	scanf("%d",&n);
	if (n<=0||n%2==0)                        // 判斷n輸入正誤
		printf("輸入錯誤！");
	else
	{
		for(i=1;i<=n/2+1;i++)               // 列印上三角，（包括中間行)
		{
			for(j=1;j<=n/2+i;j++)
			{
				if(j>=n/2-i+2)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
		for(i=n/2;i>=1;i--)               //列印下三角，（不包括中間行）
		{                             //將i改為倒序，這樣就不必再次考慮每行中項的列印，下個for迴圈可以直接複製上三角部分
			for(j=1;j<=n/2+i;j++)         //這個for迴圈與上三角一致
				if(j>=n/2-i+2)
					printf("*");
				else
					printf(" ");
			printf("\n");
		}
	}
	return 0;
}
*/
