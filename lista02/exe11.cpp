//
// Created by caio on 22/08/2025.
//

#include "exe11.h"
#include <cstdio>
int main() {
    char name01[10], name02[10];
    float value01, value02;
    printf("Digite o nome:");
    scanf("%s", name01);
    printf("Digite o peso: ");
    scanf("%f", &value01);

    printf("Digite o nome:");
    scanf("%s", name02);
    printf("Digite o peso: ");
    scanf("%f", &value02);

    if (value01>value02) {
        printf("PESADO %s", name01);
    }else {
        printf("PESADO %s", name02);
    }
}