/* 
    7. Faça um algoritmo que funcione como uma calculadora entre dois números, e que possua as 4 operações básicas:
    soma, subtração, divisão e multiplicação. O programa deve perguntar ao usuário qual operação ele quer realizar, 
    a resposta do usuário deverá ser um caracterem '+' se soma, '-'se subtração, '*'se multiplicação, e '/'se divisão.
    Em seguida, o programa deve pedir para o usuário digitar o primeiro níumero e depois o segundo. Como saída o 
    programa deve exibir o resultado da operação realizada.
    a) Faça utilizando if/else
*/

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale (0, "Portuguese");
    float valor1, valor2, soma, subtracao, multiplicacao, divisao;
    char operacao;

    printf ("Digite a operação que você deseja: '+' se soma, '-' se subtração, '*'se multiplicação e '/' se divisão ");
    scanf("%c", &operacao);
    getchar ();

if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/'){


        printf ("Digite os dois números entre os quais você seja efetuar a operação: ");
        scanf("%f %f", &valor1, &valor2);

        soma = valor1 + valor2;
        subtracao = valor1 - valor2;
        multiplicacao = valor1 * valor2;
        divisao = valor1 / valor2;


        if (operacao == '+'){
            printf("O resultado da soma dos valores %f e %f é %f ", valor1, valor2, soma);
        } else if (operacao == '-'){
            printf("O resultado da subtração dos valores %f e %f é %f ", valor1, valor2, subtracao);
        } else if (operacao == '*'){
            printf("O resultado da multiplicação dos valores %f e %f é %f ", valor1, valor2, multiplicacao);
        } else if (operacao == '/'){
            printf("O resultado da divisão dos valores %f e %f é %f ", valor1, valor2, divisao);
        } else {
            printf ("Erro ");
        }

    } else {
        printf("Operação não suportada, tente novamente ");
    }

}



/*   b) Faça utilizando switch/case */

#include <stdio.h>
#include <locale.h>

int main(){

    setlocale (0, "Portuguese");
    float valor1, valor2, soma, subtracao, multiplicacao, divisao;
    char operacao;

    printf ("Digite a operação que você deseja: '+' se soma, '-'se subtração, '*'se multiplicação e '/' se divisão ");
    scanf("%c", &operacao);
    getchar ();

    if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/'){


        printf ("Digite os dois números entre os quais você seja efetuar a operação: ");
        scanf("%f %f", &valor1, &valor2);

        soma = valor1 + valor2;
        subtracao = valor1 - valor2;
        multiplicacao = valor1 * valor2;
        divisao = valor1 / valor2;

        switch (operacao) {
            case '+':
                printf("O resultado da soma dos valores %f e %f é %f ", valor1, valor2, soma);
                break;
            case '-':
                printf("O resultado da subtração dos valores %f e %f é %f ", valor1, valor2, subtracao);
                break;
            case '*':
                printf("O resultado da multiplicação dos valores %f e %f é %f ", valor1, valor2, multiplicacao);
                break;
            case '/':
                printf("O resultado da divisão dos valores %f e %f é %f ", valor1, valor2, divisao);
                break;
            default:
                printf("Erro, tente novamente");
                break;
        }
    } else {
        printf("Operação não suportada, tente novamente ");
    }


}