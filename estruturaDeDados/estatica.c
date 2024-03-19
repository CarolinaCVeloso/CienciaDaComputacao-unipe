#include <stdio.h>
int pega_int(char *string);
int main(){

    int N = pega_int("Digite um inteiro: ");
    int numeros[N];
    for(int i=0; i<N; i++){
        numeros[i]=i + 1;
        printf("%d\t", numeros[i]);
    }

    printf("\n");
    return 0;
}
int pega_int(char *string){
    int num;
    printf("%s\n: ", string);
    scanf("%d", &num);
    return num;
}

