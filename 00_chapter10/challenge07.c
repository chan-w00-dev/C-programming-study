#include <stdio.h>

int MaxK(int n){
    int k;
    if(n/2 == 0) return 0;
    else return 1 + MaxK(n/2);
}

int main(){
    int n,k;
    printf("Enter integer : ");
    scanf("%d", &n);

    k = MaxK(n);
    printf("공식을 만족하는 k의 최댓값은 %d", k);
}