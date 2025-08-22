//
// Created by caio on 22/08/2025.
//

#include "exe09.h"
#include <cstdio>
int main() {
    int value01, value02;
    printf("Digite o primeiro valor: ");
    scanf("%i", &value01);
    printf("Digite o segundo valor: ");
    scanf("%i", &value02);
    if ((value01 + value02) > 10) {
        printf("O 2 elevado %i = %i", value01+value02, value01+value02 * 2);
    } else {
        printf("A metade %i = %i", value01+value02, (value01+value02) / 2);

    }
}