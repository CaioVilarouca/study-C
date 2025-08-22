//
// Created by caio on 21/08/2025.
//

#include "exe14e15.h"
#include <cstdio>

int main() {
    int number01, number02;
    printf("Informe um numero: ");
    scanf("%i", &number01);
    printf("Informe um numero: ");
    scanf("%i", &number02);
    printf("A soma %i e %i igual: %i \n", number01, number02, number01 + number02);
    printf("A subtracao %i e %i igual: %i \n", number01, number02, number01 - number02);
    printf("A multiplicacao %i e %i igual: %i \n", number01, number02, number01 * number02);
    printf("A divisao %i e %i e igual %.2f", number01, number02, (float)number01/number02);
}