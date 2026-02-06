#include <stdio.h>

int NSquare(int n){
    if(n == 0) return 1;
    else return 2*NSquare(n-1);
}

int main(){
    int n,ans;
    printf("정수 입력 : ");
    scanf("%d", &n);
    ans = NSquare(n);
    printf("2의 %d승은 %d", n, ans);
}