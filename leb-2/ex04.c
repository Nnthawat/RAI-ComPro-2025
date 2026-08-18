#include <stdio.h> 
#include <math.h>
int main(){
    int A;
    float  B, C, D, E;
    char name[20];
    printf("Enter your Name:");
    scanf(" %[^\n]s",name);

    printf("Enter your student ID:");
    scanf("%d",&A);

    printf("Enter your Programmind score:");
    scanf("%f",&B);

    printf("Enter your Physics score    :");
    scanf("%f",&C);

    printf("Enter your Calculus score   :");
    scanf(" %f",&D);
    E = (D + B + C)/3;
    printf("Hi %s(%d)! your GPA is %0.2f\n", name, A, E);
    return 0;
}