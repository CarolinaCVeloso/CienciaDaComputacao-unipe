/*
    4. Faça um programa em C que leia seu nome completo da entrada (stdin) letra a letra e as 
    escreva uma em cada linha.

    Você poderá utilizar qualquer estrutura de repetição.
*/

#include    <stdio.h>


int main()
{
    char letra; 
    printf ("Escreva seu nome completo: ");
    letra = getchar();
    while (letra != '\n') {
        printf ("%c \n", letra);
        letra = getchar();
    }
}