//
// Created by caio on 22/08/2025.
//

#include "exe05.h"
#include <cstdio>
int main() {
    int value;
    printf("Digite um numero: ");
    scanf("%i", &value);
    if (value % 3 == 0) {
        printf("Multiplo de 3");
    }else {
        printf("Não e Multiplo de 3");
    }
}