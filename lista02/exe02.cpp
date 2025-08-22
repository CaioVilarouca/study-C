//
// Created by caio on 22/08/2025.
//

#include "exe02.h"
#include <cstdio>
int main() {
    float value;
    printf("informe um numero: ");
    scanf("%f", &value);
    if (value >= 10) {
        printf("numero %.0f e maior ou igual 10", value);
    }else {
        printf("numero %.0f NAO e maior ou igual 10", value);

    }

}