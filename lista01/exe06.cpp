//
// Created by caio on 21/08/2025.
//
#include <cstdio>
#include "exe06.h"
int main() {
    float c;
    printf("Informe a temperatura °C:");
    scanf("%f", &c);
    printf("Temperatura correspondente em graus Farenheit  °%.2f", (c * 1.8) + 32);
}