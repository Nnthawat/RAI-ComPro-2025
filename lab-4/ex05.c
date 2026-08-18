#include <stdio.h> 
int main(){
    int num;
    int Sun ,Mem ;
    printf("Enter the number :  ");
    scanf("%d",&Mem);
    Sun = Mem;
    for (num = (Mem - 1); num >= 1; num--){
        Mem *= num;
    }
    printf("Factorial of %d is %d\n",Sun ,Mem);
    return 0;
}