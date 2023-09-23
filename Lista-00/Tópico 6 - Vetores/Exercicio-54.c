#include <stdio.h>
#include <math.h>

double power(double base, double expoente) {
    double result = pow(base, expoente);

    if (result == HUGE_VAL) {
        int numerador = 1;
        int denominador = 1;

        while (expoente != (int)expoente) {
            expoente *= 10;
            numerador *= 10;
        }

        int gcd = 1;
        int a = numerador;
        int b = denominador;

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        gcd = a;

        numerador /= gcd;
        denominador /= gcd;

        result = pow(base, numerador);
        result = pow(result, 1.0 / denominador);
    }

    if (expoente < 0) {
        result = 1 / result;
    }

    return result;
}

int main() {
    double base = 2.0;
    double expoente = 3.0;

    double resultado = power(base, expoente);
    printf("%.2lf^%.2lf = %.2lf\n", base, expoente, resultado);

    return 0;
}
