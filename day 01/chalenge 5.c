#include <stdio.h>

int main() {
    float C ;
    float ms ;
    printf("donner la température en Celsius   : ");
    scanf("%f",&C);
    if(C<0){
        printf("l'etat de l'eau est solid");
    }
    else if(0<=C && C<100){
        printf("l'etat de l'eau est Liquide");
    }
    else
    printf("l'etat de l'eau est gaz");
    

    return 0;
}