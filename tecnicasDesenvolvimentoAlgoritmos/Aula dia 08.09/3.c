/* 3.  Ler a altura e a base de um triângulo e calcular sua área. 
        A fórmula de área de um triângulo é A = (base*altura)/2.
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(0, "Portuguese");
    float baseT, alturaT, areaT;

    printf("Digite a base do triângulo: ");
    scanf ("%f", &baseT);
    printf("Digite a altura do triângulo: ");
    scanf ("%f", &alturaT);

    areaT = (baseT * alturaT)/2;

    printf("A área do triângulo de base %f e altura %f é %f ", baseT, alturaT, areaT);
}