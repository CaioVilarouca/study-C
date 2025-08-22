//
// Created by caio on 21/08/2025.
//

#include "exe01.h"
#include <cstdio>

int main() {
    float value;
    printf("Informe um valor: ");
    scanf("%f", &value);
    if (value>10) {
        printf("numero %.0f e maior que 10", value);
    }else {
        printf("numero %.0f e nao e maior", value);
    }
}