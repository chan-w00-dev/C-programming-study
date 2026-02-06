#include <stdio.h>

int Gcd(int num1, int num2){
    int gcd;
    for(int i = 2; i < num1; i++){
        if(num1 % i == 0){
            if(num2 % i == 0){
                gcd = i;
            }
        }
    }
    return gcd;
}

int main(){
    int num1, num2, gcd;
    printf("정수 2개 입력 : ");
    scanf("%d %d", &num1, &num2);
    gcd = Gcd(num1,num2);
    printf("%d, %d의 최대공약수 : %d", num1, num2, gcd);
}