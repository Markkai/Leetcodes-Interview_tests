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


/*�C�L�٧ιϮ�
int main (void)
{
	int n,j,i;                              // i��row��,j��col��
	printf("�]n���_�ơ^��J�Ϯװ���n:\n");
	scanf("%d",&n);
	if (n<=0||n%2==0)                        // �P�_n��J���~
		printf("��J���~�I");
	else
	{
		for(i=1;i<=n/2+1;i++)               // �C�L�W�T���A�]�]�A������)
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
		for(i=n/2;i>=1;i--)               //�C�L�U�T���A�]���]�A������^
		{                             //�Ni�אּ�˧ǡA�o�˴N�����A���Ҽ{�C�椤�����C�L�A�U��for�j��i�H�����ƻs�W�T������
			for(j=1;j<=n/2+i;j++)         //�o��for�j��P�W�T���@�P
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
