//
// Created by caio on 21/08/2025.
//
#include <cstdio>
#include "exe07.h"
int main() {
    int numberInt;
    float numberFloat;
    printf("Informe um numero inteiro: ");
    scanf("%d", &numberInt);
    printf("Informe um numero float: ");
    scanf("%f", &numberFloat);
    printf("Voce informou os numeros %d e %.2f", numberInt, numberFloat);
}