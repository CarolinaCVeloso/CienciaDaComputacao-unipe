/*
    1. Faça um programa que leia duas notas e calcule a média destas notas e apresente o resultado. 
    Repita para três alunos.
*/

#include    <stdio.h>
#include    <locale.h>

int main()
{
    setlocale (0, "Portuguese");

    float nota1, nota2, media;
    int contador;

    for (contador=1; contador <= 3; contador++) {

        printf("Digite as notas: ");
        scanf ("%f %f", &nota1, &nota2);

        media = (nota1 + nota2)/2;
        
        printf("A média das notas do aluno %d é %.2f \n", contador, media);
    }
}
