//
// Created by caio on 22/08/2025.
//

#include "exe06.h"
#include <cstdio>
int main() {
    int value, verification;
    printf("Digite um numero: ");
    scanf("%i", &value);
    printf("informe o multiplo a ser testado: ");
    scanf("%i", &verification);
    if (value % verification == 0) {
        printf("Multiplo de %i", verification);
    }else {
        printf("Não e Multiplo de %i", verification);
    }
}