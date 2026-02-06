#include <stdio.h>

/*
// Q1
int main(){
    char str[50];
    int len;
    int idx = 0;
    printf("Enter string : ");
    scanf("%s", str);
    while(str[idx] != '\0'){
        len = ++idx;
    }
    printf("Length of string : %d", len);
}
*/

// Q2
int main(){
    char str[50];
    int len;
    int idx = 0;
    printf("Enter string : ");
    scanf("%s", str);
    while(str[idx] != '\0'){
        len = ++idx;
    }
    printf("%s", str);
    for(int i=0; i<(len+1)/2; i++){
        char tmp = str[len-i];
        str[len-i] = str[i];
        str[i] = tmp;
    }
    printf("%s", str);
}
