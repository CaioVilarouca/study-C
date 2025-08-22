//
// Created by caio on 22/08/2025.
//

#include "exe10.h"
#include <cstdio>
int main() {
    float value01, value02, value03;
    printf("Digite o primeiro valor: (MAX 2.0) ");
    scanf("%f", &value01);
    printf("Digite o segundo valor: (MAX 3.0) ");
    scanf("%f", &value02);
    printf("Digite o terceiro valor: (MAX 5.0) ");
    scanf("%f", &value03);
    if (value01+value02+value03 >= 6) {
        printf("APROVADO %.2f", value01+value02+value03);
    }else {
        printf("REPROVADO %.2f", value01+value02+value03);
    }
}