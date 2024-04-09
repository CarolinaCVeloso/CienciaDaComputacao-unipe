#include <stdio.h>

int divisores(int num){
    int count = 0;
    for (int i = 1; i <=num; i++){
        if(num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    int qtdDivisores = divisores(num);
    printf("O numero %d possui %d divisores.\n", num, qtdDivisores);
    return 0;
}
