#include <stdio.h>
int main(void){
   // 1번 문제 
    int num;
    printf("Enter the integer : ");
    scanf("%d", &num);

    printf("\nResult : %d",~num + 1);
    return 0;
    
    // 2번 문제
    /*
   int num = 3;
   printf("3*8 = %d\n",num = num << 3);
   printf("3*8/4 = %d",num >> 2);
   return 0;
   */
}