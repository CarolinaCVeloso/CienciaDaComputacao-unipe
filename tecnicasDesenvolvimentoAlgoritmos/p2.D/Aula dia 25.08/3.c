
#include <stdio.h>

int main()
{
    setlocale(0, "Portuguese")
    int idade, anoNasc;

    const int ano = 2023;

    printf("Digite o ano de nascimento do atleta ");
    scanf("%d",&anoNasc);
    getchar();

    idade = ano - anoNasc;

if (idade >=5 && idade <= 7){
    printf("O nadador de idade %d é da categoria Infantil A ", idade);
} else if (idade >= 8 && idade <=10){
    printf("O nadador de idade %d é da categoria Infantil B ", idade);
} else if (idade >= 11 && idade <= 13) {
    printf("O nadador de idade %d é da categoria Juvenil A ", idade);
} else if (idade >= 14 && idade <= 17) {
    printf("O nadador de idade %d é da categoria Juvenil B ", idade);
} else if(idade < 5 || idade > 80) {
    printf("Categoria Inválida ");
} else {
    printf("O nadador de idade %d é da categoria Senior ", idade);
}
}

/* Com Switch 
if (idade < 5 || idade > 80){
    printf("Idade %d não categorizada", idade);
} else {
    switch (idade) {
        case 5:
        case 6:
        case 7:
            printf("O nadador de idade %d é da categoria Infantil A ", idade);
            break;
        case 8:
        case 9:
        case 10:
            printf("O nadador de idade %d é da categoria Infantil B ", idade);
            break;
        case 11:
        case 12:
        case 13:
            printf("O nadador de idade %d é da categoria Juvenil A ", idade);
            break;
        case 14:
        case 15:
        case 16:
        case 17:
            printf("O nadador de idade %d é da categoria Juvenil B ", idade);
            break;
        default:
            printf("O nadador de idade %d é da categoria Sênior ", idade);
            break;
}  

    

*/