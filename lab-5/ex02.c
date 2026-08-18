#include <stdio.h> 
#include <math.h>
int main(){
    int original[] = {1,2,3,4,5,6,7,8,9};
    int Revers[100],Y;

    for (Y = 0; Y <= 8; Y++){
        Revers[Y] = original[(8 - Y)];
    }
    printf("Revered array are: {");
    for (Y = 0; Y <= 8; Y++){
        printf(" %d ",Revers[Y]);
        if(Y != 8){printf(",");}
    }
    printf("}\n");
    return 0;
}
