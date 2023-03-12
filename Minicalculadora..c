#include <stdio.h>

float calculadora(float operando1, char operador, float operando2) {
    float resultado = 0.0;
    switch (operador) {
        case '+':
            resultado = operando1 + operando2;
            break;
        case '-':
            resultado = operando1 - operando2;
            break;
        case '*':
            resultado = operando1 * operando2;
            break;
        case '/':
            resultado = operando1 / operando2;
            break;
        default:
            resultado = -9999; // valor especial para indicar operador inválido
            break;
    }
    return resultado;
}

int main() {
    int n, i;
    float operando1, operando2, resultado;
    char operador;

    scanf("%d", &n); // Lê a quantidade de operações

    for (i = 0; i < n; i++) {
        scanf("%f %c %f", &operando1, &operador, &operando2);
        resultado = calculadora(operando1, operador, operando2);
        if (resultado == -9999) {
            printf("Erro: operador não reconhecido\n");
        } else {
            printf("%.1f\n", resultado);
        }
    }

    return 0;
}
