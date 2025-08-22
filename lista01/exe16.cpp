//
// Created by caio on 21/08/2025.
//

#include "exe16.h"
#include <cstdio>
int main() {
    float sal, total, comissao;
    printf("Informe o salario R$: ");
    scanf("%f", &sal);
    printf("Informe o total do mes R$: ");
    scanf("%f", &total);
    printf("Informe a comissao em percetual: ");
    scanf("%f", &comissao);
    printf("Salario bruto %.2f", sal + (total * (comissao / 100)));
}