//
// Created by caio on 22/08/2025.
//

#include "exe07.h"
#include <cstdio>
int main () {
    int value;
    printf("Digite um valor: ");
    scanf("%d", &value);
    if (value % 2 == 0) {
        printf("%i e PAR", value);
    }
    else {
        printf("%i e IMPAR", value);
    }
}