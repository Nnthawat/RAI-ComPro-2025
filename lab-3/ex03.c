#include <stdio.h> 
int main(){
    int num1 ;
    printf("Enter number in range(0-100):  ");
    scanf("%d",&num1);
    switch (num1){
    case 1 ... 100:
        switch (num1 % 2){
        case 0:
            printf("%d is even\n",num1);
            break;
        
        default:
            printf("%d is odd\n",num1);
            break;
        }
        break;
    default:
        printf("%d is out of range\n",num1);
        break;
    }
    return 0;
}