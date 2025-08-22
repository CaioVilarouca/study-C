//
// Created by caio on 22/08/2025.
//

#include "exe08.h"
#include <cstdio>

int main() {
    int value;
    printf("Digite um numero: ");
    scanf("%i", &value);
    if (value > 20) {
        printf("A metade %i = %i ", value, value/2);
    }else {
        printf("O dobro %i = %i ", value, value*2);
    }
}
