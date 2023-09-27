/*
    Conforme estudamos em sala, MODELE (utilizando o draw.io) E IMPLEMENTE (utilizando a linguagem C)
algoritmos para calcular a área e o perímetro de figuras geométricas planas, conforme a figura a seguir:

 Figura: http://materiasparaconcursos.com.br/wp-content/uploads/2019/08/area-e-perimetro-967x1024.jpg
*/

#include    <stdio.h>

int opSN, figura, opcaoAP, lado, altura, ladoA, ladoB, ladoC, diagnMaior, diagnMenor, base, baseMaior, baseMenor, raio;
float perimetro, area;
const float pi = 3.14159;

int main(){
    
    printf ("Bem vindo à calculadora de área e perímetro! \n");
    printf ("Você deseja realizar um cálculo? 1 - Sim, 2 - Não ");
    scanf("%d", &opSN);

    do{
        if (opSN == 1) {
        
            printf ("Digite qual a figura que você deseja calcular 1 - Triângulo, 2 - Quadrado, 3 - Retângulo, 4 -Paralelogramo,  5 - Losango, 6 -Trapézio, 7 Círculo: \n");
            scanf("%d", &figura);

            printf ("Digite '1' - para calcular o perímetro ou '2' - para calcular a área: ");
            scanf ("%d", &opcaoAP);

            switch (figura) {
                case 1: if (opcaoAP ==1){

                            printf ("Digite os valores dos lados a, b e c: ");
                            scanf("%d %d %d", &ladoA, &ladoB, &ladoC);
                            perimetro = ladoA + ladoB + ladoC;
                            printf ("O perímetro do triângulo informado é %.2f ", perimetro);

                        } else if (opcaoAP == 2){

                            printf ("Digite os valores da base e da altura: ");
                            scanf("%d %d", &base, &altura);
                            area = (base * altura) / 2;
                            printf ("A área do triângulo informado é de %.2f ", area);

                        } else{

                            printf ("Erro, opção inválida ");
                        }
                        break;
                case 2: if (opcaoAP == 1){

                            printf ("Digite o valor do lados: ");
                            scanf("%d", &lado);
                            perimetro = 4 * lado;
                            printf ("O perímetro do quadrado informado é %.2f ", perimetro);

                        } else if (opcaoAP == 2){

                            printf ("Digite o valor do lado: ");
                            scanf("%d", &lado);
                            area = lado * lado;
                            printf ("A área do quadrado informado é de %.2f ", area);

                        } else{

                            printf ("Erro, opção inválida ");

                        }
                        break;
                case 3: if (opcaoAP == 1){

                            printf ("Digite o valor dos dois lados diferentes do retângulo: ");
                            scanf("%d %d", &ladoA, &ladoB);
                            perimetro = (2 * ladoA) + (2 * ladoB);
                            printf ("O perímetro do retângulo informado é %.2f ", perimetro);

                        } else if (opcaoAP == 2){

                            printf ("Digite o valor dos dois lados diferentes do retângulo: ");
                            scanf("%d %d", &ladoA, &ladoB);
                            area = ladoA * ladoB;
                            printf ("A área do retângulo informado é de %.2f ", area);

                        } else{

                            printf ("Erro, opção inválida ");
                        }
                        break;
                case 4: if (opcaoAP == 1){

                            printf ("Digite o valor dos dois lados diferentes do paralelogramo: ");
                            scanf("%d %d", &ladoA, &ladoB);
                            perimetro = (2 * ladoA) + (2 * ladoB);
                            printf ("O perímetro do paralelogramo informado é %.2f ", perimetro);

                        } else if (opcaoAP == 2){

                            printf ("Digite o valor do maior lado do paralelogramo e sua altura: ");
                            scanf("%d %d", &ladoA, &altura);
                            area = ladoA * altura;
                            printf ("A área do paralelogramo informado é de %.2f ", area);

                        } else{

                            printf ("Erro, opção inválida ");
                        }
                        break;
                case 5: if (opcaoAP == 1){

                            printf ("Digite o valor do lado do losango: ");
                            scanf("%d", &lado);
                            perimetro = 4 * lado;
                            printf ("O perímetro do losango informado é %.2f ", perimetro);

                        } else if (opcaoAP == 2){

                            printf ("Digite o valor da diagonal maior e da diagonal menor do losango: ");
                            scanf("%d %d", &diagnMaior, &diagnMenor);
                            area = (diagnMaior * diagnMenor) / 2;
                            printf ("A área do losango informado é de %.2f ", area);

                        } else{

                            printf ("Erro, opção inválida ");
                        }
                        break;
                case 6: if (opcaoAP == 1){

                            printf ("Digite o valor da base maior, da base menor e dos dois outros lados do trapézio: ");
                            scanf("%d %d %d %d", &baseMaior, &baseMenor, &ladoA, &ladoB);
                            perimetro = baseMaior + baseMenor + ladoA + ladoB;
                            printf ("O perímetro do trapézio informado é %.2f ", perimetro);

                        } else if (opcaoAP == 2){

                            printf ("Digite o valor da base maior, da base menor e a altura do trapézio:");
                            scanf("%d %d %d", &baseMaior, &baseMenor, &altura);
                            area = (baseMaior + baseMenor) * altura / 2;
                            printf ("A área do trapézio informado é de %.2f ", area);

                        } else{

                            printf ("Erro, opção inválida ");
                        }
                        break;
                case 7: if (opcaoAP == 1){

                            printf ("Digite o valor do raio do círculo: ");
                            scanf("%d", &raio);
                            perimetro = 2 * pi * raio;
                            printf ("O perímetro do círculo informado é %.2f ", perimetro);

                        } else if (opcaoAP == 2){

                            printf ("Digite o valor do raio do círculo: ");
                            scanf("%d", &raio);
                            area = pi * (raio * raio);
                            printf ("A área do círculo informado é de %.2f ", area);

                        } else{

                            printf ("Erro, opção inválida ");
                        }
                        break;
                default: printf ("Erro, opção inválida");
                break;
                
            }
            
        
        } else {
            printf ("Obrigada por utilizar nossa calculdora! ");
        }
        
        printf ("\n Você deseja realizar um novo cálculo? 1 - Sim, 2 - Não \n");
        scanf("%d", &opSN);

    } while (opSN == 1);
    
}
    