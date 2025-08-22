//
// Created by caio on 22/08/2025.
//

#include "exe04.h"
#include <cstdio>
int main() {
    float value;
    printf("Digite um valor: ");
    scanf("%f", &value);
    if (value>0) {
        printf("Numero POSITIVO");
    }else if (value == 0) {
        printf("NULO ou ZERO");
    }else {
        printf("Numero NEGATIVO");
    }
}