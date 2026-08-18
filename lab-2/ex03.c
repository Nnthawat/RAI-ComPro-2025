#include <stdio.h> 
#include <math.h>
int main(){
    int age,weigh;
    float height;
    char name[20],edu[20],gender;
    printf("Enter your name:");
    scanf(" %[^\n]s",name);

    printf("Enter your Age:");
    scanf("%d",&age);

    printf("Enter your height:");
    scanf(" %f",&height);

    printf("Enter your weight:");
    scanf("%d",&weigh);

    printf("Enter your gender:");
    scanf(" %c",&gender);

    printf("Enter your Education Qualification:");
    scanf(" %[^\n]s",edu);

    printf("Name     : %s\n",name);
    printf("Age      : %d\n",age);
    printf("Gender   : %c\n",gender);
    printf("Height   : %0.1f\n",height);
    printf("Weight   : %d\n",weigh);
    printf("Education: %s\n",edu);

    return 0;
}