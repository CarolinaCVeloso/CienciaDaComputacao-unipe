/*  Ler o mês no formato de número entre 1 e 12, e escrever o número de dias do mês correspondente. 
    Utilize a estrutura switch case. 
    Obs: Considere que fevereiro possui 28 dias.
*/ 

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");
    int mes;

    printf("Digite o mês no formato de número entre 1 e 12: ");
    scanf("%d",&mes);

    if (mes < 1 || mes > 12) {
        printf("Mês %d é inválido ", mes);
    } else {
        switch (mes) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("O mês %d possui 31 dias ", mes);
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("O mês %d possui 30 dias ", mes);
                break;
            default:
                printf("O mês %d possui 28 dias ", mes);
                break;
        }
    }
}