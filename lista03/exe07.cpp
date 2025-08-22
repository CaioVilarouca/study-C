//
// Created by caio on 22/08/2025.
//

#include "exe07.h"
#include "exe06.h"
#include <stdio.h>
int main() {
    printf("\n");
    for (int i = 1000; 0 <= i; i--) {
        if (i % 2 != 0) {
            printf("IMPARES %d \n", i);
        }
    }
}