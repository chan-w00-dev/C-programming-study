#include <stdio.h>

void PrintPrimeNumber(int n){
    int i = 0;
    int j;
    for(int num = 2; i < n; num++){
        for(j = 2; j < num; j++){
            if(num % j == 0) break;
            }
        if(num == j){
                printf("%d ", num);
                i++;
        }
        
    }
}

int main(){
    int n = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    PrintPrimeNumber(n);
}