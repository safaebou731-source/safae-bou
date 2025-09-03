#include <stdio.h>
int main(void){
    float M,M2;
    printf("veuiller entrer un montant :");
    scanf("%f",&M);
    M2=((M*5)/100)+M;
    printf("avec taxe ajoutee :%.2f \n",M2);
}