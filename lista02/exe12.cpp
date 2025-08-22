//
// Created by caio on 22/08/2025.
//

#include "exe12.h"
#include <cstdio>
int main() {
     int number;
     printf("Informe o numero:");
     scanf("%i", &number);
     if (number >= 20 && number <= 90) {
          printf("Entre 20 e 90");
     }else {
          printf("Nao compreendido");
     }
}