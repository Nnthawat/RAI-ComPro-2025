#include <stdio.h> 
int main(){
    int num;
    float sam ,Mem ;
    sam = 0;
    num = 1;
    while(num <= 10){
        printf("%d. Enter the number :  ",num);
        scanf("%f",&Mem);
        sam += Mem;
        num++;
    }
    printf("\ntotal sum is %.0f\n",sam);
    return 0;
}