#include <stdio.h>
#include <stdlib.h>

int main(){

    int year = 2021;
    int month = 2;
    int day = 28;
    int i, n;
    printf("Input n days date become: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        day++;
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            if(day == 32){
                day = 1;
                month++;
            }
            if(month == 13){
                month=1;
                year++;
            }
        }
        if(month==4 || month==6 || month==9 || month==11){
            if(day==31){
                day=1;
                month++;
            }
        }
        if(month== 2){
            if((year%4==0 && year%100!=0) || year%400==0){
                if(day==30){
                    day==1;
                    month++;
                }
            }
            else{
                if(day==29){
                    day=1;
                    month++;
                }
            }
        }
    }
    printf("%4d/%2d/%2d\n", year,month,day);
}



/*
int main(){

    int year = 2021;
    int month = 2;
    int day = 28;
    int i,n;
    printf("Input n days: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        day += 1;
        if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day == 32){
                day = 1;
                month += 1;
            }
            if(month == 13){
                month = 1;
                year += 1;
            }
        }
        if(month == 4 || month == 6 || month == 9 || month == 11){
            if(day == 31){
                day = 1;
                month += 1;
            }
        }
        if(month == 2){
            if((year%4==0 && year%100!=0) || year%400==0){
                if(day == 30){
                    day = 1;
                    month += 1;
                }
            }
            else{
                if(day == 29){
                    day = 1;
                    month += 1;
                }
            }
        }
    }
    printf("After %d days, date: %4d/%2d/%2d\n", n, year,month,day);
    system("pause"); return 0;

}*/


























/*
int main(){

    int year = 2021;
    int month = 2;
    int day = 28;
    int n, i;
    printf("Current date: %4d/%2d/%2d\n", year,month,day);
    printf("Input a n days number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        day += 1;
        if(month==1 || month==3 || month==5 || month==7 || month== 8 || month== 10 || month== 12){
            if(day == 32){
                day = 1;
                month += 1;
            }
            if(month == 13){
                month = 1;
                year += 1;
            }
        }
        if(month== 4 || month== 6 || month== 9 || month== 11){
            if(day == 31){
                day = 1;
                month += 1;
            }
        }
        if(month == 2){
            if((year%4==0 && year%100!=0) || year%400==0){
                if(day == 30){
                    day = 1;
                    month += 1;
                }
            }
            else{
                if(day == 29){
                    day = 1;
                    month += 1;
                }
            }
        }
    }
    printf("After %d days the date is : %4d/%2d/%2d\n", n,year,month,day);
    system("pause"); return 0;
}
*/
