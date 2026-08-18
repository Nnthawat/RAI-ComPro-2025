#include <stdio.h> 
#include <math.h>
int main(){
    int Hor,Min;
    int In_min;
    printf("Enter total minutes:");
    scanf("%d",&In_min);
    Min = In_min%60;
    Hor = (In_min - Min)/60;
    printf("%d minutes is %d hour(s) and %d minute(s)\n", In_min, Hor, Min);
    return 0;
}