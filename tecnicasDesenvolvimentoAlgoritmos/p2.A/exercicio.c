/* Conforme discutido em aula, MODELE E IMPLEMENTE um algoritmo que:

Gere um número secreto entre zero e cem (0 a 100). Obs.: esse número pode 
ser informado pelo usuário, fixado no código ou gerado aleatoriamente (random) 

Peça como entrada ao usuário palpites para acertar o número secreto.

Caso o usuário acerte o número secreto, ou seja o palpite é igual ao número secreto,
 o jogo encerra, caso contrário, é solicitado ao usuário um novo palpite.

O algoritmo deve oferecer como saída, ao final da execução, o número secreto e a
 quantidade de palpites que o usuário forneceu até acertar o número secreto.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int senha = rand() % 101;

    int tentativa;

    int counter = 0;
    

    do {
        printf("Digite seu palpite entre 0 e 100: ");
        scanf("%d", &tentativa);
        counter++;

        if (tentativa == senha) {
            printf("Parabéns! Você acertou a senha %d em %d palpites.\n", senha, counter);
            break;
        } else {
            printf("Palpite incorreto. Tente novamente.\n");
        }
    } while (tentativa != senha);
    return 0;
}
