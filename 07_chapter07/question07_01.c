#include <stdio.h>
int main(void){
    /*
    // 1Q
    int num = 0;
    printf("how much? : ");
    scanf("%d",&num);

    while(num > 0){
        printf("Hello world!\n");
        num--;
    }
    */

    /*
    // 2Q
    int num, i = 1;
    printf("how much? : ");
    scanf("%d",&num);

    while(i < num + 1){
        printf("%d ",i*3);
        i++;
    }
    */

    /*
    // 3Q
    int ent = 1;
    int res = 0;
    while(ent != 0){
        printf("Enter the number : ");
        scanf("%d", &ent);
        res += ent;
    }

    printf("Add Result : %d\n", res);
    */
    
    /*
    // 4Q
    int dan,num = 9;
    printf("What dan? : ");
    scanf("%d",&dan);

    while(num > 0){
        printf("%2d * %2d = %2d\n", dan, num, dan*num);
        num--;
    }
    */

    // 5Q
    int num, count, div;
    double avg;

    printf("how many? : ");
    scanf("%d", &count);
    div = count;

    while(count > 0){
        printf("Enter the number : ");
        scanf("%d",&num);
        avg += num;
        count--;
    }

    printf("Average : %lf\n", avg / div);


    return 0;
}