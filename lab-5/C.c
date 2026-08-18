#include <stdio.h> 
int main(){
    int X ,Y ,Mem,CO,CQC = 0,A = 0;
 
    printf("Enter number of element : ");
    scanf("%d",&Mem);

    int num[Mem] ,QC[Mem];
    printf("Enter %d integers:  ",Mem);
    for (Y = 1; Y <= Mem; Y++){
        scanf("%d",&num[Y]);
    }

    printf("Output:");  

    for (Y = 1; Y <= Mem; Y++){
        CO = 0;
        A = 0;

        for (X = 1; X <= CQC; X++){if (QC[X] == num[Y]){A = 1;}}        

        if (A == 0){
            for (X = 1; X <= Mem; X++){if(num[X] == num[Y]){CO++;}}
            CQC++;
            QC[CQC] = num[Y];
            printf("Element %d occurs %d times\n",num[Y],CO);
        }
    }
    return 0;
}