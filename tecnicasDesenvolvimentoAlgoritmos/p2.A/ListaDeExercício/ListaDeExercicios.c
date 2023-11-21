/*
ESSA LISTA DE EXERCÍCIOS CONSISTE EM GERAR DOIS VETORES 
ALEATÓRIOS DE 10 POSIÇÕES CADA UM E RESOLVER OS PROBLEMAS 
LISTADOS A SEGUIR

Problemas:

1. IMPRIMIR UM VETOR
2. BUSCAR UM ELEMENTO EM UM VETOR (RETORNAR A POSIÇÃO DESSE ELEMENTO)
3. BUSCAR UMA POSIÇÃO EM UM VETOR (RETORNAR O VALOR ARMAZENADO EM UMA POSIÇÃO)
4. VERIFICAR SE EXISTEM ELEMENTOS DUPLICADOS
5. VERIFICAR SE UM VETOR ESTÁ ORDENADO
6. ORDENAR UM VETOR
7. INVERTER O VETOR
8. SOMAR OS ELEMENTOS DE DOIS VETORES NA MESMA POSIÇÃO
9. SUBTRAIR OS ELEMENTOS DE DOIS VETORES NA MESMA POSIÇÃO
10. MULTIPLICAR OS ELEMENTOS DE DOIS VETORES NA MESMA POSIÇÃO
11. DIVIDIR OS ELEMENTOS DE DOIS VETORES NA MESMA POSIÇÃO
12. CONTAR A QUANTIDADE DE ELEMENTOS PARES E ÍMPARES EM UM VETOR E LISTAR ESSES VALORES
13. IMPRIMIR SUBCONJUNTOS DE UM VETOR: POR EXEMPLO: DO ÍNDICE 2 AO ÍNDICE 8 DE UM VETOR)
14. CALCULAR A MÉDIA DOS ELEMENTOS DE UM VETOR
15. CALCULAR A MEDIANA DOS ELEMENTOS DE UM VETOR
16. CALCULAR O DESVIO PADRÃO DOS ELEMENTOS DE UM VETOR
16. CALCULAR A VARIÂNCIA DOS ELEMENTOS DE UM VETOR
18. ENCONTRAR O MAIOR E O MENOR ELEMENTOS DE UM VETOR
19. RETIRAR UM ELEMENTO DE UM VETOR E REORGANIZAR TODOS OS OUTROS ELEMENTOS
20. IMPRIMIR O VETOR ALTERNADO (APENAS OS ÍNDICES PARES E DEPOIS APENAS OS ÍNDICES ÍMPARES)
21. MULTIPLICAR CADA ELEMENTO DO VETOR POR UM VALOR ESCALAR
22. CALCULAR A SOMA DE TODOS OS ELEMENTOS DE UM VETOR
23. RETORNAR O VETOR RESULTANTE DA UNIÃO DE DOIS VETORES
24. RETORNAR O VETOR RESULTANTE DA INTERSEÇÃO DE DOIS VETORES
25. RECEBER COMO ENTRADA DOIS VETORES E RETORNAR OS ELEMENTOS QUE ESTÃO PRESENTES EM APENAS UM DOS VETORES, MAS QUE NÃO ESTÃO EM AMBOS

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define TAM 10

void imprimir_vetor(int v[TAM]) {
    int i;
    printf("[");
    for (i = 0; i < TAM; i++) {
        printf("%d", v[i]);
        if (i < TAM - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int buscar_elemento(int v[TAM], int x) {
    int i;
    for (i = 0; i < TAM; i++) {
        if (v[i] == x) {
            return i;
        }
    }
    return -1;
}

int buscar_posicao(int v[TAM], int p) {
    if (p >= 0 && p < TAM) {
        return v[p];
    }
    return -1;
}

int verificar_duplicados(int v[TAM]) {
    int i, j;
    for (i = 0; i < TAM - 1; i++) {
        for (j = i + 1; j < TAM; j++) {
            if (v[i] == v[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int verificar_ordenado(int v[TAM]) {
    int i;
    for (i = 0; i < TAM - 1; i++) {
        if (v[i] > v[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void ordenar_vetor(int v[TAM]) {
    int i, j, aux;
    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void inverter_vetor(int v[TAM]) {
    int i, aux;
    for (i = 0; i < TAM / 2; i++) {
        aux = v[i];
        v[i] = v[TAM - i - 1];
        v[TAM - i - 1] = aux;
    }
}

void somar_vetores(int v1[TAM], int v2[TAM], int v3[TAM]) {
    int i;
    for (i = 0; i < TAM; i++) {
        v3[i] = v1[i] + v2[i];
    }
}

void subtrair_vetores(int v1[TAM], int v2[TAM], int v3[TAM]) {
    int i;
    for (i = 0; i < TAM; i++) {
        v3[i] = v1[i] - v2[i];
    }
}

void multiplicar_vetores(int v1[TAM], int v2[TAM], int v3[TAM]) {
    int i;
    for (i = 0; i < TAM; i++) {
        v3[i] = v1[i] * v2[i];
    }
}

void dividir_vetores(int v1[TAM], int v2[TAM], float v3[TAM]) {
    int i;
    for (i = 0; i < TAM; i++) {
        if (v2[i] != 0) {
            v3[i] = (float)v1[i] / v2[i];
        } else {
            v3[i] = 0; 
        }
    }
}

void contar_pares_impares(int v[TAM]) {
    int i, pares, impares;
    pares = impares = 0;
    printf("Elementos pares: ");
    for (i = 0; i < TAM; i++) {
        if (v[i] % 2 == 0) {
            pares++;
            printf("%d ", v[i]);
        }
    }
    printf("\nElementos ímpares: ");
    for (i = 0; i < TAM; i++) {
        if (v[i] % 2 != 0) {
            impares++;
            printf("%d ", v[i]);
        }
    }
    printf("\nQuantidade de elementos pares: %d\n", pares);
    printf("Quantidade de elementos ímpares: %d\n", impares);
}

void imprimir_subconjunto(int v[TAM], int inicio, int fim) {
    int i;
    if (inicio >= 0 && inicio < TAM && fim >= 0 && fim < TAM && inicio <= fim) {
        printf("[");
        for (i = inicio; i <= fim; i++) {
            printf("%d", v[i]);
            if (i < fim) {
                printf(", ");
            }
        }
        printf("]\n");
    } else {
        printf("Índices inválidos\n");
    }
}

float calcular_media(int v[TAM]) {
    int i, soma = 0;
    for (i = 0; i < TAM; i++) {
        soma += v[i];
    }
    return (float)soma / TAM;
}

float calcular_mediana(int v[TAM]) {
    int aux[TAM], i;
    for (i = 0; i < TAM; i++) {
        aux[i] = v[i];
    }
    ordenar_vetor(aux);
    if (TAM % 2 == 0) {
        return (float)(aux[TAM / 2 - 1] + aux[TAM / 2]) / 2;
    } else {
        return (float)aux[TAM / 2];
    }
}

float calcular_desvio_padrao(int v[TAM]) {
    int i;
    float media, soma = 0, variancia;
    media = calcular_media(v);
    for (i = 0; i < TAM; i++) {
        soma += pow(v[i] - media, 2);
    }
    variancia = soma / TAM;
    return sqrt(variancia);
}

float calcular_variancia(int v[TAM]) {
    int i;
    float media, soma = 0;
    media = calcular_media(v);
    for (i = 0; i < TAM; i++) {
        soma += pow(v[i] - media, 2);
    }
    return soma / TAM;
}

void encontrar_maior_menor(int v[TAM], int *maior, int *menor) {
    int i;
    *maior = *menor = v[0];
    for (i = 1; i < TAM; i++) {
        if (v[i] > *maior) {
            *maior = v[i];
        }
        if (v[i] < *menor) {
            *menor = v[i];
        }
    }
}

void remover_elemento(int v[TAM], int posicao) {
     int i;
    if (posicao >= 0 && posicao < TAM) {
        for (i = posicao; i < TAM - 1; i++) {
            v[i] = v[i + 1];
        }
    }
}


void imprimir_vetor_alternado(int v[TAM]) {
     int i;
    printf("Elementos com índices pares: ");
    for (i = 0; i < TAM; i += 2) {
        printf("%d ", v[i]);
    }
    printf("\nElementos com índices ímpares: ");
    for (i = 1; i < TAM; i += 2) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void multiplicar_vetor_por_escalar(int v[TAM], int escalar) {
    
    int i;
    for (i = 0; i < TAM; i++) {
        v[i] *= escalar;
    }
}

int calcular_soma_vetor(int v[TAM]) {
    
    int i;
    int soma = 0;
    for (i = 0; i < TAM; i++) {
        soma += v[i];
    }
    return soma;
}

void uniao_vetores(int v1[TAM], int v2[TAM], int resultado[TAM * 2]) {
    int i;
    for (i = 0; i < TAM; i++) {
        resultado[i] = v1[i];
        resultado[i + TAM] = v2[i];
    }
}

void intersecao_vetores(int v1[TAM], int v2[TAM], int resultado[TAM]) {
    int i,j;
    int contador = 0;
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (v1[i] == v2[j]) {
                resultado[contador] = v1[i];
                contador++;
                break; 
            }
        }
    }
}

void diferenca_vetores(int v1[TAM], int v2[TAM], int resultado[TAM]) {
    int i,j;
    int contador = 0;
    for (i = 0; i < TAM; i++) {
        int pertence_a_v2 = 0;
        for (j = 0; j < TAM; j++) {
            if (v1[i] == v2[j]) {
                pertence_a_v2 = 1;
                break;
            }
        }
        if (!pertence_a_v2) {
            resultado[contador] = v1[i];
            contador++;
        }
    }
}




int main() {
    int v[TAM];
    int escalar;
    int v2[TAM];
    int soma = calcular_soma_vetor(v);
    int elemento;
    int pos;
    int pos_remover;
    int inicio, fim;
    float desvio_padrao = calcular_desvio_padrao(v);
    float mediana = calcular_mediana(v);
    int i, opcao;
    int maior, menor;
    float variancia = calcular_variancia(v);
    float media = calcular_media(v);
    srand(time(NULL));
    
    for (i = 0; i < TAM; i++) {
        v[i] = rand() % 100 + 1; 
    }
    
    do {
    // Exibir o menu de opções
    printf("Escolha uma opção:\n");
    printf("1. Imprimir vetor\n");
    printf("2. Buscar elemento\n");
    printf("3. Buscar posição\n");
    printf("4. Verificar duplicados\n");
    printf("5. Verificar ordenado\n");
    printf("6. Ordenar vetor\n");
    printf("7. Inverter vetor\n");
    printf("8. Somar vetores\n");
    printf("9. Subtrair vetores\n");
    printf("10. Multiplicar vetores\n");
    printf("11. Dividir vetores\n");
    printf("12. Contar pares e ímpares\n");
    printf("13. Imprimir subconjunto\n");
    printf("14. Calcular média\n");
    printf("15. Calcular mediana\n");
    printf("16. Calcular desvio padrão\n");
    printf("17. Calcular variância\n");
    printf("18. Encontrar maior e menor\n");
    printf("19. Remover elemento\n");
    printf("20. Imprimir vetor alternado\n");
    printf("21. Multiplicar vetor por escalar\n");
    printf("22. Calcular soma do vetor\n");
    printf("23. União de vetores\n");
    printf("24. Interseção de vetores\n");
    printf("25. Diferença de vetores\n");
    printf("0. Sair\n");

    scanf("%d", &opcao);
        
    switch (opcao) {
    case 1:
        imprimir_vetor(v);
        break;

    case 2:
        printf("Digite o elemento a ser buscado: ");
        scanf("%d", &elemento);
        int posicao = buscar_elemento(v, elemento);
        if (posicao != -1) {
            printf("Elemento encontrado na posição %d\n", posicao);
        } else {
            printf("Elemento não encontrado\n");
        }
        break;

    case 3:
        printf("Digite a posição a ser buscada: ");
        scanf("%d", &pos);
        int valor = buscar_posicao(v, pos);
        if (valor != -1) {
            printf("Valor na posição %d: %d\n", pos, valor);
        } else {
            printf("Posição inválida.\n");
        }
        break;

    case 4:
        if (verificar_duplicados(v)) {
            printf("Existem elementos duplicados no vetor\n");
        } else {
            printf("Não existem elementos duplicados no vetor\n");
        }
        break;

    case 5:
        if (verificar_ordenado(v)) {
            printf("O vetor está ordenado\n");
        } else {
            printf("O vetor não está ordenado\n");
        }
        break;

    case 6:
        ordenar_vetor(v);
        printf("Vetor ordenado\n");
        break;

    case 7:
        inverter_vetor(v);
        printf("Vetor invertido\n");
        break;

    case 8:
        for (i = 0; i < TAM; i++) {
            v2[i] = rand() % 100 + 1;
        }
        int resultado_soma[TAM];
        somar_vetores(v, v2, resultado_soma);
        printf("Vetor resultante da soma\n");
        imprimir_vetor(resultado_soma);
        break;

    case 9:
        for (i = 0; i < TAM; i++) {
            v2[i] = rand() % 100 + 1;
        }
        int resultado_subtracao[TAM];
        subtrair_vetores(v, v2, resultado_subtracao);
        printf("Vetor resultante da subtração\n");
        imprimir_vetor(resultado_subtracao);
        break;

    case 10:
        for (i = 0; i < TAM; i++) {
            v2[i] = rand() % 100 + 1;
        }
        int resultado_multiplicacao[TAM];
        multiplicar_vetores(v, v2, resultado_multiplicacao);
        printf("Vetor resultante da multiplicação\n");
        imprimir_vetor(resultado_multiplicacao);
        break;

    case 11:
        for (i = 0; i < TAM; i++) {
            v2[i] = rand() % 100 + 1;
        }
        float resultado_divisao[TAM];
        dividir_vetores(v, v2, resultado_divisao);
        printf("Vetor resultante da divisão\n");
        for (i = 0; i < TAM; i++) {
            printf("%.2f" , resultado_divisao[i]);
        }
        printf("\n");
        break;

    case 12:
        contar_pares_impares(v);
        break;

    case 13:
        printf("Digite o índice de início e fim do subconjunto" );
        scanf("%d %d", &inicio, &fim);
        imprimir_subconjunto(v, inicio, fim);
        break;

    case 14:
        printf("A média dos elementos do vetor é %.2fn, media");
        break;

    case 15:       
        printf("A mediana dos elementos do vetor é %.2fn, mediana");
        break;

    case 16:
        printf("O desvio padrão dos elementos do vetor é %.2fn, desvio_padrao");
        break;

    case 17:
        printf("A variância dos elementos do vetor é %.2fn, variancia");
        break;

    case 18:
        encontrar_maior_menor(v, &maior, &menor);
        printf("O maior elemento do vetor é %d e o menor é %dn, maior, menor");
        break;

    case 19:
        printf("Digite a posição do elemento a ser removido ");
        scanf("%d", &pos_remover);
        remover_elemento(v, pos_remover);
        break;

    case 20:
        imprimir_vetor_alternado(v);
        break;

    case 21:
        printf("Digite o valor escalar ");
        scanf("%d", &escalar);
        multiplicar_vetor_por_escalar(v, escalar);
        break;

    case 22:
        printf("A soma dos elementos do vetor é %dn", soma);
        break;

   case 23:
        for (i = 0; i < TAM; i++) {
            v2[i] = rand() % 100 + 1;
        }
        int uniao[TAM * 2];
        uniao_vetores(v, v2, uniao);
        printf("União dos vetores\n");
        imprimir_vetor(uniao);
        break;

    case 24:
     
        for (i = 0; i < TAM; i++) {
            v2[i] = rand() % 100 + 1;
        }
        int intersecao[TAM];
        intersecao_vetores(v, v2, intersecao);
        printf("Interseção dos vetores\n");
        imprimir_vetor(intersecao);
        break;
    case 25:
       
        for (i = 0; i < TAM; i++) {
            v2[i] = rand() % 100 + 1;
        }
        int diferenca[TAM];
        diferenca_vetores(v, v2, diferenca);
        printf("Diferença dos vetores\n");
        imprimir_vetor(diferenca);
        break;
    case 0:
        printf("Saindo do programa\n");
        break;
    default:
        printf("Opção inválida. Tente novamente\n");
}
} while (opcao != 0);


    return 0;
}