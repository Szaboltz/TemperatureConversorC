// A temperature conversor between C to F! 

#include <stdio.h>
#include <stdlib.h>

void main(){
    float c, f;

    printf("Bem vindo ao Conversor de Graus Centigrados para Fahrenheit!\n***************************************************************************\n");
    printf("Digite a temperatura em graus centigrados: ");
    scanf("%f", &c);

    f = ((9.0 * c + 160.0) / 5.0);

    printf("***************************************************************************\nA temperatura em graus centigrados e: %3.2fC\nEm Fahrenheit e: %3.2fF\n***************************************************************************", c, f);
}