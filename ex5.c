#include <stdio.h>
int main(void){
    float V,R;
    float Pi=3.14;
    printf("veuiller entrer la valeur de R :");
    scanf("%f",&R);
    V=4/3*Pi*R*R*R;
    printf("le volume du sphere est %.2f",V);
    return 0;
}