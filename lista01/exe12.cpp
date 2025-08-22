//
// Created by caio on 21/08/2025.
//

#include "exe12.h"
#include <cstdio>
int main() {
    float number;
    printf("Informe um numero: ");
    scanf("%f", &number);
    printf("Voce informou o numero %.2f e o dobro dele %.2f quadrado %.2f e o cubo %.2f",
        number, number * 2, number * number, number * number * number);
}