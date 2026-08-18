#include <stdio.h> 
int main(){
    int num;
    int sam ,Mem ;
    sam = 0;
    num = 1;
    do{
        printf("Enter the number :  ");
        scanf("%d",&Mem);
        sam = Mem%2;
        if (Mem != 0){
            if (sam == 0){printf("%d is even.\n",Mem);}
            else{printf("%d is odd.\n",Mem);}
        }
    }while(Mem != 0);
    printf("Exiting Program... Bye\n");
    return 0;
}