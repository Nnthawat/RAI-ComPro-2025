#include <stdio.h> 
int main(){
    int Mem[8] ,Y ,here = 0 ,Ann = 1;
    int small,big;

    for (Y = 1; Y <= 8; Y++){
        printf("Enter vaiue %d :  ",Y);
        scanf("%d",&Mem[Y]);
    }

    while(Ann == 1){
        Ann = 0;
        for (Y = 1; Y <= 7; Y++){
            if (Mem[Y] > Mem[Y + 1]){
                here = Mem[Y]; 
                Mem[Y] = Mem[Y + 1]; 
                Mem[Y + 1] = here;
                Ann = 1;
            }
        }
    }

    printf("Smallest number: %d\n",Mem[1]);
    printf("Largest number : %d\n",Mem[8]);
    printf("\n");
    return 0;
}