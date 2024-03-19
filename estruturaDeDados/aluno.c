#include <stdio.h>
#include <string.h>

typedef int inteiro;

typedef struct aluno {
    inteiro matricula;
    char nome[40];
    int idade;
} Aluno;

int main(){
    Aluno camilly;
    Aluno maysa;

    printf("Tamanho de struct aluno: %ld\n", sizeof(Aluno));

    camilly.matricula = 1234;
    strcpy(camilly.nome, "Camilly de Souza");
    camilly.idade = 19;

    printf("Exibindo dados da aluna: \n==============\n");
    printf("Matricula...........: %d\n", camilly.matricula);
    printf("Nome...........: %s\n", camilly.nome);
    printf("Idade...........: %d\n", camilly.idade);

    return 0;
}