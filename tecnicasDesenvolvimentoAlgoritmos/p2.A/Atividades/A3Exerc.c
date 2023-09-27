/*
   Modele e implemente um algoritmo para calcular o índice de massa corporal de uma pessoa e imprima ao final, 
   além do valor do IMC calculado, a faixa de IMC em que essa pessoa se encontra, conforme a recomendação a seguir:
   https://dms.ufpel.edu.br/static/bib/apoio/imc.pdf

    Como é possível identificar o link acima, existem diferenças nas faixas de IMC entre pessoas adultas e idosas,
    nesse contexto, pesquise e implemente o IMC para crianças e mulheres (gestantes e não gestantes)
    
    Valores utilizados para gestantes: 25 semanas - link https://www.fetalmed.net/calculadoras/calculadora-imc-gestante/

    Valores utilizados para crianças - meninos e meninas - link  https://www.unifacvest.edu.br/assets/uploads/files/arquivos/236df-palla,-matheus-xavier.-imc-em-escolares-de-12-anos-de-idade.-lages,-unifacvest,-2017_2.-curso-de-educacao-fisica..pdf
*/

#include    <stdio.h>


    int idade, option;
    float peso, altura, imc;
    char opSexo, opGestante;

int main(){

    do {
        printf("Digite a idade do indivíduo: ");
        scanf ("%d", &idade);

        if (idade <=5){
            printf("Idade não suportada na calculadora de IMC. Consulte um médico \n");
        } else{

            printf("Digite o peso e a altura do indivíduo: ");
            scanf ("%f %f", &peso, &altura);
            getchar();

            printf("Digite o sexo do indivíduo: f- Feminino ou m - Masculino ");
            scanf("%c", &opSexo);
            getchar();

            printf("Esta pessoa está grávida? s - Sim ou n - Não ");
            scanf("%c", &opGestante);
                        
        
            imc = peso / (altura * altura);

    // IDOSO    ****************************************
            if (idade >= 60){
                if(imc < 22){
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                } else if (imc >= 22 && imc < 27){
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação adequada ou eutrófico. ", imc);
                } else {
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso. ", imc );
                } 

    // GESTANTE  ***********************************
            } else if (idade > 17 && idade < 60 && opGestante == 's'){
                if (imc < 22.5){
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                } else if (imc >= 22.5 && imc < 27){
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                } else if (imc >= 27 && imc < 31.7) {
                printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                } else {
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                }
    //ADULTOS NÃO GESTANTES ******************************

            } else if (idade > 17 && idade < 60 && opGestante == 'n'){
                if (imc < 18.5){
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                } else if (imc >= 18.5 && imc < 25){
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                } else if (imc >= 25 && imc < 30) {
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                } else {
                    printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                }

    // MENINOS ********************************************
            } else if (idade >= 6 && idade <= 17 && opSexo == 'm'){
                switch (idade){
                    case 6: {
                        if (imc < 13){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13 && imc < 17.7){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 17.7 && imc < 21.1) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 7: {
                        if (imc < 12.9){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 12.9 && imc < 17.8){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 17.8 && imc < 21.8) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }             
                    case 8: {
                        if (imc < 12.9){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 12.9 && imc < 18.1){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 18.1 && imc < 22.6) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 9: {
                        if (imc < 12.9){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 12.9 && imc < 18.5){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 18.5 && imc < 23.6) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 10: {
                        if (imc < 12.9){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 12.9 && imc < 19){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 19 && imc < 24.6) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 11: {
                        if (imc < 13.3){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13.3 && imc < 19.6){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 19.6 && imc < 25.5) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 12: {
                        if (imc < 13.6){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13.6 && imc < 20.3){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 20.3 && imc < 26.3) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 13: {
                        if (imc < 14){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 14 && imc < 20.9){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 20.9 && imc < 26.9) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 14: {
                        if (imc < 14.4){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 14.4 && imc < 21.6){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 21.6 && imc < 27.5) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 15: {
                        if (imc < 15){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 15 && imc < 22.3){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 22.3 && imc < 27.9) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    } 
                    case 16: {
                        if (imc < 15.5){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 15.5 && imc < 22.9){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 22.9 && imc < 28.3) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 17: {
                        if (imc < 16.1){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 16.1 && imc < 23.5){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 23.5 && imc < 28.7) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    default:
                        printf("Erro, tente novamente");
                    break;
                }
    // MENINAS ************************************************
            } else if (idade >= 6 && idade <= 17 && opSexo == 'f'){
                switch (idade){
                    case 6: {
                        if (imc < 13.2){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13.2 && imc < 17){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 17 && imc < 19.3) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 7: {
                        if (imc < 13.1){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13.1 && imc < 17.2){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 17.2 && imc < 19.8) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }             
                    case 8: {
                        if (imc < 13){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13 && imc < 17.4){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 17.4 && imc < 20.4) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 9: {
                        if (imc < 13.1){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13.1 && imc < 17.9){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 17.9 && imc < 21.2) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 10: {
                        if (imc < 13.4){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13.4 && imc < 18.6){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 18.6 && imc < 22.3) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 11: {
                        if (imc < 13.8){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 13.8 && imc < 19.5){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 19.5 && imc < 23.5) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 12: {
                        if (imc < 14.3){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 14.3 && imc < 20.5){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 20.5 && imc < 24.8) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 13: {
                        if (imc < 15){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 15 && imc < 21.6){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 21.6 && imc < 26.2) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 14: {
                        if (imc < 15.7){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 15.7 && imc < 22.7){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 22.7 && imc < 27.5) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 15: {
                        if (imc < 16.3){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 16.3 && imc < 23.7){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 23.7 && imc < 28.5) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    } 
                    case 16: {
                        if (imc < 16.8){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 16.8 && imc < 24.4){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 24.4 && imc < 29.2) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    case 17: {
                        if (imc < 17.2){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação baixo peso ", imc);
                        } else if (imc >= 17.2 && imc < 24.8){
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação normal ", imc);
                        } else if (imc >= 24.8 && imc < 29.5) {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação sobrepeso ", imc);
                        } else {
                            printf("O imc dessa pessoa é %.2f, e ela se encontra na classificação obesidade ", imc);
                        }
                        break;
                    }
                    default:
                        printf("Erro, tente novamente");
                    break;
                }

            }else {
                printf(" Erro. Tente novamente ");
            }

            printf("\n Você deseja fazer outro cálculo de IMC? 1 - sim ou 2 - não ");
            scanf ("%d", &option);
        }
      } while (option == 1);
    printf ("\n Obrigada por utilizar nossa calculadora \n");
}