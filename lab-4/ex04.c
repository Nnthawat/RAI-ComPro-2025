#include <stdio.h> 
int main(){
    int num;
    int sam ,Mem ;
    num = 1;
    printf("Enter the number :  ");
    scanf("%d",&Mem);
    printf("\nMultiplication Table for %d:\n",Mem);
    do{
        sam = Mem * num;
        printf("%d x %d = %d\n",Mem,num,sam);
        num++;
    }while(num <= 12);
    return 0;
}