#include <stdio.h>
#include <string.h>
typedef float real;

typedef struct {
    int dec_ob;
    char nome[40];
    char cpf[15];
    real preco_servico;
} Cliente;

Cliente le_defunto();
void exibe_defunto(Cliente defunto);

int main(){

    Cliente joao;
    int quantidade;
    printf("Digite a quantidade de defuntos ");
    scanf("%d",&quantidade);
    Cliente defuntos[quantidade];

    // le os defuntos
    for(int i = 0; i < quantidade; i++){
        defuntos[i] = le_defunto();
    }

    for(int i = 0; i < quantidade; i++){
        exibe_defunto(defuntos[i]);
    }

    // joao le_defunto();
    // exibe_defunto(joao);

    return 0;
}


//função para ler um defunto
Cliente le_defunto(){
    Cliente defunto;
    printf("Digite o número da D.O. ");
    scanf("%d", &defunto.dec_ob);

    printf("Digite o nome do defunto:");
    scanf("%39s", defunto.nome);

    printf("Digite o CPF: ");
    scanf("%14s", defunto.cpf);

    printf( "Digite o preço do serviço: ");
    scanf("%f", &defunto.preco_servico);

    return defunto;
}

// função para exibir defunto
void exibe_defunto(Cliente defunto){
    printf("Dados do cliente\n==============");
    printf("D.O........: %d\n", defunto.dec_ob);
    printf("Nome.......: %s\n", defunto.nome);
    printf("CPF........: %s\n", defunto.cpf);
    printf("Preço......: %.2f\n", defunto.preco_servico);
}
