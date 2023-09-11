/* 

2.  Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
    A fórmula de conversão é: C = (F-32)*(5.0/9).
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(0, "Portuguese");
    float tempFahrenheit, tempCelsius;

    printf("Digite a temperatura em grau Fahrenheit: ");
    scanf("%f", &tempFahrenheit);

    tempCelsius = (tempFahrenheit - 32) * (5.0/9);

    printf("A temperatura em graus Celsius é %fº ", tempCelsius);
}