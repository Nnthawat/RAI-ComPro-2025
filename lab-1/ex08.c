#include <stdio.h> 

int main(){
    printf("+----------------+--------+--------+\n");
    printf("%s","|");
    printf("%3s","Name");
    printf("%13s","|");
    printf("%3s","Score1");
    printf("%3s","|");
    printf("%3s","Score2");
    printf("%3s\n","|");
    printf("+----------------+--------+--------+\n");
    printf("%s","|");
    printf("%3s","Alice");
    printf("%12s","|");
    printf("%7s","85");
    printf("%2s","|");
    printf("%7s","90");
    printf("%2s\n","|");

    printf("%s","|");
    printf("%3s","Bob");
    printf("%14s","|");
    printf("%7s","78");
    printf("%2s","|");
    printf("%7s","82");
    printf("%2s\n","|");

    printf("%s","|");
    printf("%3s","Charlie");
    printf("%10s","|");
    printf("%7s","92");
    printf("%2s","|");
    printf("%7s","88");
    printf("%2s\n","|");

    printf("+----------------+--------+--------+\n");
    return 0;
}