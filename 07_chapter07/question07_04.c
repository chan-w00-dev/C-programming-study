#include <stdio.h>
int main(void){
    /*
    // Q1
    int a, b, total = 0;

    printf("Enter A, B(A<B) : ");
    scanf("%d %d", &a, &b);

    for(int i = b-a; i > -1; i--){
        total += a + i;
    }

    printf("%d", total);
    */

    // Q2
    int num;
    int total = 1;

    printf("Enter the number :");
    scanf("%d", &num);

    for(int i = 1; i < num+1; i++){
        total *= i;
    }

    printf("%d", total);
}