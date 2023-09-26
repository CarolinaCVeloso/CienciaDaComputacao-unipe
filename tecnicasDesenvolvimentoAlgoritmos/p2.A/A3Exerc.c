/*
    Questão para casa - Faça o cálculo de IMC considerando as diferenças de Adulto, criança e idoso
*/



#include    <stdio.h>
#include    <locale.h>

int main()
{
    setlocale (0, "Portuguese");

    int idade;
    float peso, altura, imc;
    char option;

    do {
        printf("Digite a idade do indivíduo: ");
        scanf ("%d", &idade);

        printf("Digite o peso e a altura do indivíduo: ");
        scanf ("%f %f", &peso, &altura);
        getchar();

        imc = peso / (altura + altura);

        if (idade >= 60){
            if(imc < 22){
                printf("Baixo peso");
            } else if (imc >= 22 && imc < 27){
                printf("Normal ");
            } else if (imc >= 27 && imc < 30){
                printf("Sobrepeso ");
            } else {
                printf("Obesidade");
            }
        } else if (idade )
        {
            /* code */
        }
        

        printf("A média é %.2f \n", media);

        printf("Você deseja realizar um novo cálculo? (s/n) ");
        scanf("%c", &option);

    } while (option == 's');
    
}
