#include <stdio.h>

int main(){

float valor_imovel;

printf("Digite o valor do imóvel: ");
scanf("%f", &valor_imovel);

if (valor_imovel<= 80000.00){
    printf("Em promoção!! ");
} else {
    printf("Preço normal! " );
}

}