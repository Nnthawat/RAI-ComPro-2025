#include <stdio.h> 
int main(){
    int Mem[10] ,Y;
    for (Y = 0; Y < 10; Y++){
        printf("Enter the value %d here:  ",(Y + 1));
            scanf("%d",&Mem[Y]);
    }
    printf("Values in array are:");
    for (Y = 0; Y < 10; Y++){
            printf(" %d ",Mem[Y]);
            if(Y != 9){printf(",");}
    }
    printf("\n");
    return 0;
}