/* 
    6.    Escreva um algoritmo que leia 3 números e diga qual é o menor entre os três.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale (0, "Portuguese");
    float numero1, numero2, numero3;

    printf ("Digite três números: ");
    scanf ("%f %f %f", &numero1, &numero2, &numero3);

    if (numero1 < numero2 && numero1 < numero3) {
        printf ("O número %f é o menor número entre os três informados ", numero1);
    } else if  (numero2 < numero1 && numero2 < numero3){
        printf ("O número %f é o menor número entre os três informados ", numero2);
    } else if (numero3 < numero1 && numero3 < numero2){
        printf ("O número %f é o menor número entre os três informados ", numero3);
    } else {
        printf ("Error ");
    }
}