#include <stdio.h>

void MakeTable(int a, int b){
    int min = a<b ? a : b;
    int max = a>b ? a : b;

    for(int i = min; i<max+1; i++){
        for(int j = 1; j<10; j++){
            printf("%d x %d = %d\n", i, j, i*j);
        }
    }
}

int main(){
    int a,b;
    printf("정수 2개 입력(1~9) : ");
    scanf("%d %d", &a, &b);
    MakeTable(a,b);
}