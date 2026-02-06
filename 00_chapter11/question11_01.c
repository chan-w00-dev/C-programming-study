#include <stdio.h>

/*
// Q1
int main(){
    int arr[5];
    int max, min, sum;

    printf("Enter five numbers : ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for(int i=1; i<5; i++){
        int num = arr[i];
        if(max < num) max = num;
    }
    printf("Max : %d\n", max);

    for(int i=1; i<5; i++){
        int num = arr[i];
        if(min > num) min = num;
    }
    printf("Min : %d\n", min);

    for(int i=0; i<5; i++){
        sum += arr[i];
    }
    printf("Sum : %d\n", sum);
}
*/

// Q2
int main(){
    int len;
    char arr[] = {'\"', 'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e', '\"'};
    len = sizeof(arr)/sizeof(char);
    for(int i=0; i<len; i++){
        printf("%c", arr[i]);
    }
}