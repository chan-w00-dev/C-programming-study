#include <stdio.h>
int main(){
    /*
    // Q1
    for(int num = 2; num < 9; num += 2){
        printf("%d단\n", num);
        for(int j = 1; j < 9; j++){
            printf("%d X %d = %d\n", num, j, num*j);
            if(j == num) break;
        }
    }
    */
   // Q2
    int A,Z;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(11*i+11*j == 99) printf("A = %d, Z = %d\n", i, j);
        }
    }
}