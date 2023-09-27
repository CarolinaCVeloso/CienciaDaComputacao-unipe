#include    <stdio.h>
#include    <stdlib.h>
#include    <math.h>

 
float pitagoras (float x, float y){
    float hipotenusa;
    hipotenusa = sqrt(x * x +  y * y);
    printf("%.2f", hipotenusa);

    return hipotenusa;

}
 
int main(){
    float x, y;

    printf("Digite os valores de x e y: \n");
    scanf("%f %f", &x, &y);

    pitagoras(x, y);
}