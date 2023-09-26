/*
    Conforme estudamos em sala, MODELE (utilizando o draw.io) E IMPLEMENTE (utilizando a linguagem C)
algoritmos para calcular a área e o perímetro de figuras geométricas planas, conforme a figura a seguir:

 Figura: http://materiasparaconcursos.com.br/wp-content/uploads/2019/08/area-e-perimetro-967x1024.jpg
*/

#include    <stdio.h>

int figura, opcaoAP, perimetro, area, lado, altura, ladoA, ladoB, ladoC, diagnMaior, diagnMenor, baseMaior, baseMenor, raio;
const float pi = 3.14159;

int main()
{
    printf ("Bem vindo à calculadora de área e perímetro! ");
    printf ("Digite qual a figura que você deseja calcular 1 - Triângulo, 2 - Quadrado, 3 - Retângulo, 4 -Paralelogramo,  5 - Losango, 6 -Trapézio, 7 Círculo: ");
    scanf("%d", &figura);

    printf ("Digite '1' - para calcular o perímetro ou '2' - para calcular a área: ");
    scanf ("%d", &opcaoAP);

    if (figura == 1 && opcaoAP == 1){
        printf ("Digite os valores dos lados a, b e c: ");
        scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

        perimetro = ladoA + ladoB + ladoC;

        printf ("O perímetro do triângulo informado é %d ", perimetro);
    } else
} 
