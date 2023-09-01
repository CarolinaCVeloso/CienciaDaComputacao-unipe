#include    <stdio.h>

#define PI = 3.14159

int main(){

    float raio, area;

    printf("Digite o raio da circunferênia ");
    scanf("%f", &raio);

    area = PI * (raio * raio);

    printf("A área da circunferência é %f ", area); 

}