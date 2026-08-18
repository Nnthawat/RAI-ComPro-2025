#include <stdio.h> 
int main(){
    float C ,P ,S ,A;
    char name[20],G;
    printf("Enter your name:");
    scanf(" %[^\n]s",name);

    printf("Enter your Calculus score:");
    scanf("%f",&C);

    printf("Enter your Physic score:");
    scanf(" %f",&P);

    printf("Enter your Science score:");
    scanf("%f",&S);

    A = (C + P + S)/3;
    if (A >= 80){
        G = 'A';
    }
    else if (A >= 70 && A < 80){
        G = 'B';
    }
    else if (A >= 60 && A < 70){
        G = 'C';
    }
    else if (A >= 50 && A < 70){
        G = 'D';
    }
    else{
        G = 'F';
    }
    printf("%s, your average is %.2f. You got grade %c.\n",name,A,G);

    return 0;
}