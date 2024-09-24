#include <stdio.h>

int main() {
    float Km ;
    float ms ;
    printf("donner la vitesse en k/h  : ");
    scanf("%f",&Km);
    ms= Km * 0.27778 ;
    printf("la vitesse en m/s  est : %.2f m/s ",ms);

    return 0;
}