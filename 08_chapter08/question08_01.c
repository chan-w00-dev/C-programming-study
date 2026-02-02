#include <stdio.h>
int main(void){
    /*
    // Q1
    for(int i = 1; i <100; i++){
        if(i % 7 == 0 || i % 9 == 0)
            printf("%d ", i);
    }
    */

    /*
    // Q2
    int a, b;
    printf("Enter two Integer : ");
    scanf("%d %d", &a, &b);
    int result = (a>b) ? a-b : b-a;
    printf("Sub : %d",result);
    */

    // Q3
    double kor, math, eng, avg;
    printf("Enter the result(kor, math, eng) : ");
    scanf("%lf %lf %lf", &kor, &math, &eng);
    avg = (kor + math + eng) / 3;
    if(avg >= 90)
        printf("Grade : A");
    else if(avg >= 80)
        printf("Grade : B");
    else if(avg >= 70)
        printf("Grade : C");
    else if(avg >= 60)
        printf("Grade : D");
    else
        printf("Grade : F");
    return 0;
}