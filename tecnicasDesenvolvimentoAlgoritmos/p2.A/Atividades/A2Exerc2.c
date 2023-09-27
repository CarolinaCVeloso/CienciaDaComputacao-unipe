#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double delta, x1, x2;

    printf("Digite os coeficientes da equação de segundo grau (ax^2 + bx + c = 0):\n");
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;
    
    if (delta >= 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if (delta == 0) {
            printf("Raízes iguais:\n");
            printf("X1 = X2 = %.2lf\n", x1);
        } else {
            printf("Duas raízes reais diferentes:\n");
            printf("X1 = %.2lf\n", x1);
            printf("X2 = %.2lf\n", x2);
        }
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        printf("Raízes complexas:\n");
        printf("X1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("X2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}




