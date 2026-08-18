#include <stdio.h> 
#include <math.h>
int main(){
    float h ,r ,V ,Vi;
    printf("Enter cone hight:");
    scanf("%f",&h);

    printf("Enter cone base radius:");
    scanf("%f",&r);

    V = (r * r)*(h);
    Vi = ((3.14)*(V))/3;
    printf("cone volume = %.1f\n",Vi);
    if (Vi > 260){
        printf("This cone is perfect for Supun project\n");
    }
    else{
        printf("This cone is not perfect for Supun project\n");
    }
    return 0;
}