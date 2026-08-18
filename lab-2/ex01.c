#include <stdio.h> 
#include <math.h>
int main(){
    int Number;
    float afloat;
    char character;
    printf("Enter an integer value:");
    scanf("%d",&Number);
    printf("You enter : %d\n",Number);
    printf("Enter a float value   :");
    scanf("%f",&afloat);
    printf("You enter : %f\n",afloat);
    printf("Enter a character     :");
    scanf(" %c",&character);
    printf("You enter : %c\n",character);

    return 0;
}