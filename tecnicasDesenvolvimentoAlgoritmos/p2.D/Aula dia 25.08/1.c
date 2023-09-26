#include <stdio.h>

int main()
{
    float nota1, nota2, soma;

    const float aprovado = 6.;
    const float reprovado = 1.;

    printf("Digite a primeira nota ");
    scanf("%f",&nota1);
    getchar();

    printf("Digite a segunda nota ");
    scanf("%f",&nota2);
    getchar();

    soma = (nota1 + nota2);

    if (soma >= aprovado){
        printf("Aprovado ");
    }
    else if (soma > reprovado){
        printf("Final ");
    }
    else {
        printf("Reprovado ");
    }
}
