/*
    5.    Para ler um número inteiro e dizer se ele é impar ou par.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(0, "Portuguese");
    int numero;

    printf("Digite um número inteiro: ");
    scanf ("%d", &numero);

    if (numero % 2 == 0) {
        printf("O número inteiro %d é par ", numero);
    } else {
        printf("O número inteiro %d é ímpar ", numero);
    }
}