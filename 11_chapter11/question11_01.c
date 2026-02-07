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

    max = min = sum = arr[0];

    for(int i=1; i<5; i++){
        sum += arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
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