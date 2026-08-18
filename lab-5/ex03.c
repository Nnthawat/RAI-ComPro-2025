#include <stdio.h> 
int main(){
    int Mem[5] ,Y ,Total = 0 ,High = 0;
    for (Y = 0; Y < 5; Y++){
        printf("Enter the marke of student %d :  ",(Y + 1));
        scanf("%d",&Mem[Y]);
    }
    for (Y = 0; Y < 5; Y++){
        Total += Mem[Y];
        if(High < Mem[Y]){High = Mem[Y];}
    }
    printf("Total Make : %d\n",Total);
    printf("Highest Make : %d\n",High);
    printf("\n");
    return 0;
}
