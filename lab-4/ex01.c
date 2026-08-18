#include <stdio.h> 
int main(){
    int num;
    float sam ,Mem ;
    sam = 0;
    for (num = 1; num <= 10; num++){
        printf("%d. Enter the number :  ",num);
        scanf("%f",&Mem);
        sam += Mem;
    }
    printf("\ntotal sum is %.0f\n",sam);
    printf("Average is %.2f\n",(sam/10.00));
    return 0;
}