//
// Created by caio on 22/08/2025.
//

#include "exe13.h"
#include <cstdio>
int main() {
    int num01, num02;
    printf("Informe um numero:");
    scanf("%i", &num01);
    printf("Informe um numero:");
    scanf("%i", &num02);
    if (num01 > num02) {
        printf("%i MAIOR", num01);
    }else {
        printf("%i MAIOR", num02);
    }
}