#include <stdio.h> 
int main(){
    int num1 ;
    printf("Enter number in range(0-100):  ");
    scanf("%d",&num1);
    if (num1 <= 100 && num1 >= 0){
        if ((num1 % 2) == 0){printf("%d is even\n",num1);}
        else{printf("%d is odd\n",num1);}  
    }
    else{
        printf("%d is out of range\n",num1);
    }
    return 0;
}