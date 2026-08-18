#include <stdio.h> 
#include <math.h>
int main(){
    int age;
    float height;
    char name[20],uni[20],Lname[20];
    printf("Enter your full name   :");
    scanf(" %s",name);
    scanf("%s",Lname);
    printf("Enter your age         :");
    scanf("%d",&age);

    printf("Enter your height      :");
    scanf(" %f",&height);

    printf("Enter your University name:");
    scanf(" %[^\n]s",uni);

    printf("Hi! Everyonr. This is %c.%s from %s. I am %d years old and my height is %0.1f cm tall.\n", Lname[0], name, uni, age, height);
    return 0;
    //sscanf(fullname,%s %s,name,Lname);แยก
}