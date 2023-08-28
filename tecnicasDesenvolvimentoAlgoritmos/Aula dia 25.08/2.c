#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);
    if ((numero%2) == 0){
        printf("O número lido foi %d e é par \n", numero);
    } else{
        printf("O número lido foi %d e é ímpar \n", numero);
    }
}
