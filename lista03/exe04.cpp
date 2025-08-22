//
// Created by caio on 22/08/2025.
//

#include "exe04.h"

#include <cstdio>

int main() {
    for (int i = 100; i >= 0; i--) {
        printf("%i ", i);
        if (i % 10 == 0) {
            printf("\n");
        }
    }
}
