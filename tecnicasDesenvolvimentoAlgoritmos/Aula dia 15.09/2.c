/*
    2. Faça um programa que calcule a média de duas notas.
    Ao final dos cálculos pergunte ao usuário se ele quer realizer um novo cálculo. 
    Se a resposta for 's' repita, para qualquer outra resposta saia do programa.
*/

#include    <stdio.h>
#include    <locale.h>

int main()
{
    setlocale (0, "Portuguese");

    float nota1, nota2, media;
    char option;

    do {
        printf("Digite as notas: ");
        scanf ("%f %f", &nota1, &nota2);
        getchar();

        media = (nota1 + nota2)/2;

        printf("A média é %.2f \n", media);

        printf("Você deseja realizar um novo cálculo? (s/n) ");
        scanf("%c", &option);

    } while (option == 's');
    
}
