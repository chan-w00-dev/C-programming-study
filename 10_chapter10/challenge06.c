#include <stdio.h>

void PrintTime(int sec){
    int h = sec / 3600;
    int m = (sec - 3600 * h) / 60;
    int s = (sec - 3600*h - 60*m);
    printf("[h : %d, m : %d, s : %d]", h, m, s);
}

int main(){
    int sec;
    printf("Enter second : ");
    scanf("%d", &sec);
    PrintTime(sec);
}