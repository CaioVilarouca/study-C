//
// Created by caio on 22/08/2025.
//

#include "exe06.h"
#include <stdio.h>
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("PAR %d ", i);
        }
    }
    printf("\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("IMPARES %d ", i);
        }
    }
}