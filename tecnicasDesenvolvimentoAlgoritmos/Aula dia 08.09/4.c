/*
    4.   Ler um número e diga se eles está contido no intervalo entre 10 e 15,
        onde 10 e 15 também pertencem ao intervalo.
*/

#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(0, "Portuguese");
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 10 && numero <= 15){
        printf("O número %f está contido no intervalo entre 10 e 15 ", numero);
    } else {
        printf("O número %f não está contido no intervalo entre 10 e 15 ", numero);
    }
}