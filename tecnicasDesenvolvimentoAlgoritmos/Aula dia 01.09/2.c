#include    <stdio.h>

int main(){

float valor_hora_trabalho, numero_horas_mes, percentual_desc_inss, salario_bruto, desconto_inss, salario_liquido;

printf("Digite o valor da hora de trabalho e a quantidade de horas trabalhadas: ");
scanf("%f %f", &valor_hora_trabalho, &numero_horas_mes);
printf("Informe o percentual de desconto INSS:");
scanf("%f", &percentual_desc_inss);


salario_bruto = valor_hora_trabalho * numero_horas_mes;
desconto_inss = (salario_bruto * percentual_desc_inss)/ 100.00;
salario_liquido = salario_bruto - desconto_inss;


printf("Valor  hora: %f\tQuantidade horas: %f\tPercentual INSS: %f\n", valor_hora_trabalho, numero_horas_mes, percentual_desc_inss);
printf("Salário bruto: %f\tValor desconto: %f\tSalário líquido: %f", salario_bruto, desconto_inss, salario_liquido);

/* printf("Digite o valor da hora de trabalho: ");
scanf("%f", &valor_hora_trabalho);

printf("Digite o número de horas trabalhadas no mês: ");
scanf("%f", &numero_horas_mes);

salario_bruto = valor_hora_trabalho * numero_horas_mes;

if (salario_bruto <= 1320.0){
    desconto_inss = salario_bruto * 0.075;
} else if (salario_bruto > 1320.0 && salario_bruto < 2571.29) {
    desconto_inss = salario_bruto * 0.09;
}else if (salario_bruto >= 2571.30 && salario_bruto < 3856.94){
    desconto_inss = salario_bruto * 0.12;
} else {
    desconto_inss = salario_bruto * 0.14;
}

salario_liquido = salario_bruto - desconto_inss;

 printf ("O valor do salário líquido é de %f ", salario_liquido); */

}