#include <stdio.h>
/*
// Q1
void ThreeVal(int, int, int);
int BigCompare(int, int);
int SmallCompare(int, int);

int main(){
    int a,b,c;
    printf("Enter three integers : ");
    scanf("%d %d %d",&a,&b,&c);

    ThreeVal(a,b,c);
    return 0;
}

void ThreeVal(int a, int b, int c){
    int biggest,smallest;

    biggest = BigCompare(a,b);
    biggest = BigCompare(biggest,c);

    smallest = SmallCompare(a,b);
    smallest = SmallCompare(smallest,c);

    printf("%d, %d, %d 중 제일 큰 수는 %d, 제일 작은 수는 %d입니다", a, b, c, biggest, smallest);
}

int BigCompare(int a, int b){
    if(a>b) return a;
    else return b;
}

int SmallCompare(int a, int b){
    if(a<b) return a;
    else return b;
}
*/

/*
// Q2
void CelToFah(double);
void FahToCel(double);

int main(void){
    char tem;
    double degree;

    printf("Fah? Cel? Enter F or C : ");
    scanf("%c", &tem);

    switch (tem)
    {
    case 'F':
    case 'f':
        printf("Enter Cel : ");
        scanf("%lf", &degree);
        CelToFah(degree);
        break;

    case 'C':
    case 'c':
        printf("Enter Fah : ");
        scanf("%lf", &degree);
        FahToCel(degree);
        break;
    
    default:
        printf("Error");
        break;
    }
}

void CelToFah(double d){
    printf("CelToFah : %lf", 1.8*d+32);
}

void FahToCel(double d){
    printf("FahToCel : %lf", (d-32)/1.8);
}
*/

// Q3
int Fibonazzi(int);

int main(void){
    int tep;

    printf("How many numbers you want? : ");
    scanf("%d", &tep);

    for(int i = 0; i < tep; i++){
        if(i == 0) printf("0 ");
        else if(i == 1) printf("1 ");
        else{
            int f = Fibonazzi(i);
            printf("%d ", f);
        }     
    }
}

int Fibonazzi(int n){
    int a = 0, b = 1;
    int f;

    for(int i = 0; i < n-1; i++){
        f = a + b;
        a = b;
        b = f;
    }

    return f;
}