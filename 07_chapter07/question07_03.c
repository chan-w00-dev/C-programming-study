#include <stdio.h>
int main(void){
    /*
    // Q1 - 1
    int num = 1;
    int total = 0;

    while(num != 0){
        printf("Enter Integer(0 to quit) : ");
        scanf("%d", &num);
        total += num;
    }

    // Q1 - 2
    printf("Enter Integer(0 to quit) : ");
    scanf("%d", &num);
    total += num;
    while(num != 0){
        printf("Enter Integer(0 to quit) : ");
        scanf("%d", &num);
        total += num;
    }
    printf("Total : %d", total);
    */

    /*
    // Q2
    int num = 0;
    int check = 0;
    int total = 0;

    do{
        check = num % 2;
        while(check == 0){
            total += num;
            check = 1;
        }
        num++;
    }while(num < 101);

    printf("%d", total);
    */

    // Q3
    int cur = 2;
    int num = 1;

    do{
        do{
            printf("%d X %d = %d\n", cur, num, cur * num);
            num++;
        }while(num < 10);
        num = 1;
        cur++;
    }while(cur < 10);

    return 0;
}