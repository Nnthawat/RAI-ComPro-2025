#include <stdio.h> 
#include <math.h>
int main(){
    int A, B, C, Mi, Me;
    printf("Enter integer #1:");
    scanf("%d",&A);
    printf("Enter integer #2:");
    scanf("%d",&B);
    printf("Enter integer #3:");
    scanf("%d",&C);
    Mi = A;
    Me = A;

    if (Mi > B){Mi = B;}
    if (Mi > C){Mi = C;}
    if (Me < B){Me = B;}
    if (Me < C){Me = C;}

    float S = A + B +C;
    float D = (S)/3;

    printf("Results:\n");
    printf("Minimum: %d\n",Mi);
    printf("Meximum: %d\n",Me);
    printf("Sum    : %0.0f\n",S);
    printf("Average: %0.2f\n",D);
    
    return 0;
    //sscanf(fullname,%s %s,name,Lname);แยก
}