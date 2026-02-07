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

/*
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
    printf("%s\n", str);
    
    for(int i=0; i<(len+1)/2; i++){
        char tmp = str[len-(i+1)];
        str[len-(i+1)] = str[i];
        str[i] = tmp;
    }
    printf("%s", str);
}
*/

// Q3

int main(){
    char str[50];
    int len = 0;
    char max = 0;

    printf("Enter string : ");
    scanf("%s", str);
    while(str[len] != '\0'){
        len++;
    }

    for(int i=0; i<len-1; i++){
        if(max < str[i]) max = str[i];
    }
    printf("%c", max);
}
