#include <stdio.h> 
int main(){
    int Mem[10] ,Y ,Odd = 0 ,Even = 0;
    for (Y = 1; Y <= 10; Y++){
        printf("Enter vaiue %d :  ",Y);
        scanf("%d",&Mem[Y]);
    }
    for (Y = 1; Y <= 10; Y++){
        if(Mem[Y]%2 == 0){Even++;}
        else{Odd++;}
    }

    printf("Odd number: %d\n",Odd);
    printf("Even number : %d\n",Even);
    printf("\n");
    return 0;
}

