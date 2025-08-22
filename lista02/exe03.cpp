//
// Created by caio on 22/08/2025.
//

#include "exe03.h"
#include <cstdio>
int main() {
    float value;
    printf("informe um numero: ");
    scanf("%f", &value);
    if (value == 10) {
        printf("numero %.0f e igual a 10", value);
    }else if (value > 10) {
        printf("numero %.0f e maior 10", value);
    }else {
        printf("numero %.0f e menor 10", value);
    }
}
